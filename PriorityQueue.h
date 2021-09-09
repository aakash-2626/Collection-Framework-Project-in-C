#include <stdlib.h>
#include "ArrayList.h"

typedef struct {
    ArrayList* arr;
} PriorityQueue;

void upheapify(PriorityQueue* pq, int i, int (*compare)(void*, void*));
void addInPQ(PriorityQueue* pq, void* obj, int (*compare)(void*, void*));
void downHeapify(PriorityQueue* pq, int i, int (*compare)(void*, void*));
void* removeFromPQ(PriorityQueue* pq, int (*compare)(void*, void*));
int sizeOfPQ(PriorityQueue* pq);
int isEmptyPQ(PriorityQueue* pq);
void clearPQ(PriorityQueue* pq);
void* peekPQ(PriorityQueue* pq);
