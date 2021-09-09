#include <stdlib.h>

typedef struct Node {
   struct Node* next;
   void* obj;
} Node;

typedef struct Stack {
    Node* head;
    int size;
} Stack;

void push(Stack* stk, void* obj);
int empty(Stack* stk);
void* pop(Stack* stk);
void* peek(Stack* stk);
int size(Stack* stk);
int search(Stack* stk, void* obj);
