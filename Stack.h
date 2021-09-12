#include <stdlib.h>

typedef struct StackNode {
   struct StackNode* next;
   void* obj;
} StackNode;

typedef struct Stack {
    StackNode* head;
    int size;
} Stack;

void push(Stack* stk, void* obj);
int empty(Stack* stk);
void* pop(Stack* stk);
void* peek(Stack* stk);
int sizeOfStack(Stack* stk);
int search(Stack* stk, void* obj);
