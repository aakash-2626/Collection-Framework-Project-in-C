#include "PriorityQueue.h"

// sets the newly inserted element at its right position
void upheapify(PriorityQueue* pq, int i, int (*compare)(void*, void*)) {
    int pi = (i - 1) / 2;
    if(pi >= 0) {
        if(compare(get(pq->arr, i), get(pq->arr, pi)) < 0) {
            void* ith = get(pq->arr, i);
            set(pq->arr, i, get(pq->arr, pi));
            set(pq->arr, pi, ith);
            
            upheapify(pq, pi, compare);
        }
    }
}

// adds the element in the priority queue
void addInPQ(PriorityQueue* pq, void* obj, int (*compare)(void*, void*)) {
    if(pq->arr == NULL) {
        pq->arr = (ArrayList*) malloc(sizeof(ArrayList));
    }
    add(pq->arr, obj);
    upheapify(pq, size(pq->arr) - 1, compare);
}

// rearranges the heap after removal of the element
void downHeapify(PriorityQueue* pq, int i, int (*compare)(void*, void*)) {
    int minIndex = i;
    int li = 2 * i + 1;
    if(li < size(pq->arr) && compare(get(pq->arr, li), get(pq->arr, minIndex)) < 0) {
        minIndex = li;
    }
    
    int ri = 2 * i + 2;
    if(ri < size(pq->arr) && compare(get(pq->arr, ri), get(pq->arr, minIndex)) < 0) {
        minIndex = ri;
    }
    
    if(minIndex != i) {
        void* ith = get(pq->arr, i);
        set(pq->arr, i, get(pq->arr, minIndex));
        set(pq->arr, minIndex, ith);
        downHeapify(pq, minIndex, compare);
    }
}

// removes and returns the top element from the priority queue
void* removeFromPQ(PriorityQueue* pq, int (*compare)(void*, void*)) {
    if(pq->arr == NULL) {
        return NULL;
    }
    
    void* ans = get(pq->arr, 0);
    set(pq->arr, 0, get(pq->arr, size(pq->arr) - 1));
    removeAt(pq->arr, size(pq->arr) - 1);
    downHeapify(pq, 0, compare);
    return ans;
}

// returns the number of elements in the priority queue
int sizeOfPQ(PriorityQueue* pq) {
    if(pq->arr == NULL) {
        return 0;
    }
    
    return size(pq->arr);
}

// checks if the priority queue is empty or not
int isEmptyPQ(PriorityQueue* pq) {
    return sizeOfPQ(pq) == 0;
}

// removes all the elements from the priority queue
void clearPQ(PriorityQueue* pq) {
    free(pq->arr);
    pq->arr = NULL;
}

// returns the top element of the priority queue
void* peekPQ(PriorityQueue* pq) {
    if(pq->arr == NULL) {
        return NULL;
    }
    
    return get(pq->arr, 0);
}
