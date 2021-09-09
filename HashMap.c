#include "HashMap.h"

// initializes the map
void initMap(HashMap* map) {
    map->buckets = (ArrayList*) malloc(sizeof(ArrayList));
    for(int i = 0; i < 16; i++) {
        add(map->buckets, NULL);
    }

    map->numBuckets = 16;
    map->numEntries = 0;
}

// get the index of bucket in which the entry of the key might be present
int getBucketIndex(HashMap* map, void* key) {
    long p = (long) (&key);
    if(p < 0) {
        p *= -1;
    }

    return (int) (p % map->numBuckets);
}

// rehashes the map to increase the number of the buckets
void rehash(HashMap* map) {
    ArrayList* temp = map->buckets;
    for(int i = 0; i < map->numBuckets; i++) {
        set(map->buckets, i, NULL);
    }
    for(int i = 0; i < map->numBuckets; i++) {
        add(map->buckets, NULL);
    }

    map->numBuckets <<= 1;
    map->numEntries = 0;

    for(int i = 0; i < size(temp); i++) {
        MapNode* head = get(temp, i);
        while(head != NULL) {
            putEntry(map, head->key, head->value);
            head = head->next;
        }
    }
}

// inserts the entry of given key and value in the map
void putEntry(HashMap* map, void* key, void* value) {
    if(map->numBuckets == 0) {
        initMap(map);
    }

    int bucketIndex = getBucketIndex(map, key);
    MapNode* temp = (MapNode*) get(map->buckets, bucketIndex);

    while(temp != NULL) {
        if(temp->key == key) {
            temp->value = value;
            return;
        }

        temp = temp->next;
    }

    MapNode* node = (MapNode*) malloc(sizeof(MapNode));
    node->key = key;
    node->value = value;
    node->next = get(map->buckets, bucketIndex);

    map->numEntries++;
    set(map->buckets, bucketIndex, node);

    double loadFactor = map->numEntries / map->numBuckets;
    if(loadFactor > 0.75) {
        rehash(map);
    }
}

// returns the value of the entry with the specified key in the map
void* getValue(HashMap* map, void* key) {
    int bucketIndex = getBucketIndex(map, key);
    MapNode* temp = get(map->buckets, bucketIndex);

    while(temp != NULL) {
        if(temp->key == key) {
            return temp->value;
        }

        temp = temp->next;
    }

    return NULL;
}

// removes all the entries from the map
void clearMap(HashMap* map) {
    map->buckets = NULL;
    map->numBuckets = map->numEntries = 0;
}

// checks if the entry with the specified key exists in the map
int containsKey(HashMap* map, void* key) {
    int bucketIndex = getBucketIndex(map, key);
    MapNode* temp = get(map->buckets, bucketIndex);

    while(temp != NULL) {
        if(temp->key == key) {
            return 1;
        }

        temp = temp->next;
    }

    return 0;
}

// checks if the entry with the specified value exists in the map
int containsValue(HashMap* map, void* value) {
    for(int i = 0; i < map->numBuckets; i++) {
        MapNode* temp = get(map->buckets, i);

        while(temp != NULL) {
            if(temp->value == value) {
                return 1;
            }

            temp = temp->next;
        }
    }

    return 0;
}

// checks if the map is empty or not
int isMapEmpty(HashMap* map) {
    return map->numEntries == 0;
}

// returns the number of entries in the map
int sizeOfMap(HashMap* map) {
    return map->numEntries;
}

// removes the entry with the specified key from the map and return its value
void* removeEntry(HashMap* map, void* key) {
    int bucketIndex = getBucketIndex(map, key);
    MapNode* temp = get(map->buckets, bucketIndex);
    MapNode* prev = NULL;

    while(temp != NULL) {
        if(temp->key == key) {
            map->numEntries--;
            if(prev == NULL) {
                set(map->buckets, bucketIndex, temp->next);
            } else {
                prev->next = temp->next;
            }

            return temp->value;
        }

        prev = temp;
        temp = temp->next;
    }

    return NULL;
}
