#include <stdlib.h>

typedef struct MapNode {
    void* key;
    void* value;
    struct MapNode* next;
} MapNode;

typedef struct {
    ArrayList* buckets;
    int numBuckets;
    int numEntries;
} HashMap;

void initMap(HashMap* map);
int getBucketIndex(HashMap* map, void* key);
void rehash(HashMap* map);
void putEntry(HashMap* map, void* key, void* value);
void* getValue(HashMap* map, void* key);
void clearMap(HashMap* map);
int containsKey(HashMap* map, void* key);
int containsValue(HashMap* map, void* value);
int isMapEmpty(HashMap* map);
int sizeOfMap(HashMap* map);
void* removeEntry(HashMap* map, void* key);
