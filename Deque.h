#include <stdlib.h>

typedef struct DequeNode {
   struct DequeNode* next;
   struct DequeNode* prev;
   void* obj;
} DequeNode;

typedef struct Deque {
    DequeNode* head;
    DequeNode* tail;
    int size;
} Deque;

void addInDeque(Deque* deque, void* obj);
void addFirstDeque(Deque* deque, void* obj);
void addLastDeque(Deque* deque, void* obj);
void clearDeque(Deque* deque);
int containsDeque(Deque* deque, void* obj);
int isEmptyDeque(Deque* deque);
void* getFirstDeque(Deque* deque);
void* getLastDeque(Deque* deque);
void* pollDeque(Deque* deque);
void* removeFirstDeque(Deque* deque);
void* removeLastDeque(Deque* deque);
int sizeDeque(Deque* deque);
