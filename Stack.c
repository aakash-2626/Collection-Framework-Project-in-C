#include "Stack.h"

// pushes the object at the top of the stack
void push(Stack* stk, void* obj) {
    StackNode* nd = (Node*) malloc(sizeof(Node));
    nd->obj = obj;
    nd->next = NULL;
    
    stk->size++;
    if(stk->head == NULL) {
        stk->head = nd;
        return;
    }
    
    nd->next = stk->head;
    stk->head = nd;
}

// checks if the stack is empty or not
int empty(Stack* stk) {
    return stk->size == 0;
}

// removes and returns the element from the top of the stack
void* pop(Stack* stk) {
    if(empty(stk)) {
        return NULL;
    }

    stk->size--;
    void* result = stk->head->obj;
    stk->head = stk->head->next;
    
    return result;
}

// returns the element at the top of the stack
void* peek(Stack* stk) {
    if(empty(stk)) {
        return NULL;
    }
    
    return stk->head->obj;
}

// returns the size of the stack
int sizeOfStack(Stack* stk) {
    return stk->size;
}

// returns the offset of the latest occurence of the object in the stack
int search(Stack* stk, void* obj) {
    StackNode* temp = stk->head;
    int offset = 1;
    
    while(temp != NULL) {
        if(temp->obj == obj) {
            return offset;
        }
        
        offset++;
        temp = temp->next;
    }
    
    return -1;
}
