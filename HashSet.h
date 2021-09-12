#include <stdlib.h>
#include "ArrayList.h"

typedef struct SetNode {
    void* obj;
    struct SetNode* next;
} SetNode;

typedef struct {
    ArrayList* buckets;
    int numBuckets;
    int numEntries;
} HashSet;

void initSet(HashSet* hset);
int getBucketIndexInSet(HashSet* hset, void* obj);
void rehashSet(HashSet* hset);
int addInSet(HashSet* hset, void* obj);
void clearSet(HashSet* hset);
int setContains(HashSet* hset, void* obj);
int isSetEmpty(HashSet* hset);
int removeFromSet(HashSet* hset, void* obj);
int sizeOfSet(HashSet* hset);
