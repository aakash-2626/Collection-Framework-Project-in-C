#include "Deque.h"

// adds the element at the end of the deque
void addInDeque(Deque* deque, void* obj) {
    DequeNode* nd = (Node*) malloc(sizeof(Node));
    nd->obj = obj;
    nd->next = NULL;
    nd->prev = NULL;

    deque->size++;
    if(deque->head == NULL && deque->tail == NULL) {
        deque->head = deque->tail = nd;
        return;
    }

    deque->tail->next = nd;
    nd->prev = deque->tail;
    deque->tail = nd;
}

// adds the element at the starting of the deque
void addFirstDeque(Deque* deque, void* obj) {
    DequeNode* nd = (Node*) malloc(sizeof(Node));
    nd->obj = obj;
    nd->next = NULL;
    nd->prev = NULL;

    deque->size++;
    if(deque->head == NULL && deque->tail == NULL) {
        deque->head = deque->tail = nd;
        return;
    }

    nd->next = deque->head;
    deque->head->prev = nd;
    deque->head = nd;
}

// adds the element at the end of the deque
void addLastDeque(Deque* deque, void* obj) {
    addInDeque(deque, obj);
}

// removes all the elements from the deque
void clearDeque(Deque* deque) {
    deque->head = deque->tail = NULL;
    deque->size = 0;
}

// checks if the element is present in the deque or not
int containsDeque(Deque* deque, void* obj) {
    DequeNode* temp = deque->head;

    while(temp != NULL) {
        if(temp->obj == obj) {
            return 1;
        }

        temp = temp->next;
    }

    return 0;
}

// checks if the deque is empty or not
int isEmptyDeque(Deque* deque) {
    return deque->size == 0;
}

// returns the element at the starting of the deque
void* getFirstDeque(Deque* deque) {
    if(isEmptyDeque(deque)) {
        return NULL;
    }

    return deque->head->obj;
}

// returns the element at the ending of the deque
void* getLastDeque(Deque* deque) {
    if(isEmptyDeque(deque)) {
        return NULL;
    }

    return deque->tail->obj;
}

// removes and returns the first element from the deque
void* pollDeque(Deque* deque) {
    if(isEmptyDeque(deque)) {
        return NULL;
    }

    deque->size--;
    void* result = deque->head->obj;
    deque->head = deque->head->next;

    if(deque->head == NULL) {
        deque->tail == NULL;
    } else {
        deque->head->prev = NULL;
    }

    return result;
}

// removes and returns the first element from the deque
void* removeFirstDeque(Deque* deque) {
    return pollDeque(deque);
}

// removes and returns the last element from the deque
void* removeLastDeque(Deque* deque) {
    if(isEmptyDeque(deque)) {
        return NULL;
    }

    deque->size--;
    void* result = deque->tail->obj;
    deque->tail = deque->tail->prev;

    if(deque->tail == NULL) {
        deque->head == NULL;
    } else {
        deque->tail->next = NULL;
    }

    return result;
}

// returns the size of the deque
int sizeDeque(Deque* deque) {
    return deque->size;
}
