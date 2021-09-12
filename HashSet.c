#include "HashSet.h"

// initializes the set
void initSet(HashSet* hset) {
    hset->buckets = (ArrayList*) malloc(sizeof(ArrayList));
    for(int i = 0; i < 16; i++) {
        add(hset->buckets, NULL);
    }

    hset->numBuckets = 16;
    hset->numEntries = 0;
}

// returns the index of the bucket in which the element might be present
int getBucketIndexInSet(HashSet* hset, void* obj) {
    long p = (long) (&obj);
    if(p < 0) {
        p *= -1;
    }

    return (int) (p % hset->numBuckets);
}

// rehashes the set to increase the number of buckets
void rehash(HashSet* hset) {
    ArrayList* temp = hset->buckets;
    for(int i = 0; i < hset->numBuckets; i++) {
        set(hset->buckets, i, NULL);
    }
    for(int i = 0; i < hset->numBuckets; i++) {
        add(hset->buckets, NULL);
    }

    hset->numBuckets <<= 1;
    hset->numEntries = 0;

    for(int i = 0; i < size(temp); i++) {
        SetNode* head = get(temp, i);
        while(head != NULL) {
            addInSet(hset, head->obj);
            head = head->next;
        }
    }
}

// adds the element in the set
int addInSet(HashSet* hset, void* obj) {
    if(hset->numBuckets == 0) {
        initSet(hset);
    }

    int bucketIndex = getBucketIndexInSet(hset, obj);
    SetNode* temp = get(hset->buckets, bucketIndex);
    while(temp != NULL) {
        if(temp->obj == obj) {
            return 0;
        }

        temp = temp->next;
    }

    SetNode* node = (SetNode*) malloc(sizeof(SetNode));
    node->obj = obj;
    node->next = get(hset->buckets, bucketIndex);
    set(hset->buckets, bucketIndex, node);

    hset->numEntries++;

    double loadFactor = (1.0 * hset->numEntries) / hset->numBuckets;
    if(loadFactor > 0.75) {
        rehashSet(hset);
    }
    return 1;
}

// removes all the elements from the set
void clearSet(HashSet* hset) {
    hset->buckets = NULL;
    hset->numEntries = hset->numBuckets = 0;
}

// checks if the element is present in set or not
int setContains(HashSet* hset, void* obj) {
    int bucketIndex = getBucketIndexInSet(hset, obj);
    SetNode* temp = get(hset->buckets, bucketIndex);
    while(temp != NULL) {
        if(temp->obj == obj) {
            return 1;
        }

        temp = temp->next;
    }

    return 0;
}

// checks if the set is empty or not
int isSetEmpty(HashSet* hset) {
    return hset->numEntries == 0;
}

// removes the element from the set
int removeFromSet(HashSet* hset, void* obj) {
    int bucketIndex = getBucketIndexInSet(hset, obj);
    SetNode* temp = get(hset->buckets, bucketIndex);
    SetNode* prev = NULL;

    while(temp != NULL) {
        if(temp->obj == obj) {
            if(prev == NULL) {
                set(hset->buckets, bucketIndex, temp->next);
            } else {
                prev->next = temp->next;
            }

            hset->numEntries--;
            return 1;
        }

        prev = temp;
        temp = temp->next;
    }

    return 0;
}

// returns the size of the set
int sizeOfSet(HashSet* hset) {
    return hset -> numEntries;
}
