#include <stdlib.h>

typedef struct Node {
   struct Node* next;
   struct Node* prev;
   void* obj;
} Node;

typedef struct Deque {
    Node* head;
    Node* tail;
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
