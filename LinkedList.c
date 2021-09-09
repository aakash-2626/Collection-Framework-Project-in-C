#include "LinkedList.h"

// adds the object at the end in the list
void addInLL(LinkedList* ll, void* obj) {
    Node* nd = (Node*) malloc(sizeof(Node));
    nd->obj = obj;
    nd->next = NULL;
    nd->prev = NULL;
    ll->size++;

    if(ll->head == NULL && ll->tail == NULL) {
        ll->head = ll->tail = nd;
        return;
    }

    ll->tail->next = nd;
    nd->prev = ll->tail;
    ll->tail = nd;
}

// adds the object at the specified index in the list
void addAtLL(LinkedList* ll, int index, void* obj) {
    if(index < 0 || index >= ll->size) {
        return;
    }

    Node* nd = (Node*) malloc(sizeof(Node));
    nd->obj = obj;
    nd->next = NULL;
    nd->prev = NULL;
    ll->size++;

    if(index == 0) {
        nd->next = ll->head;
        ll->head->prev = nd;
        ll->head = nd;
    } else {
        int i = 0;
        Node* temp = ll->head;

        while(i < index - 1) {
            temp = temp->next;
            i++;
        }

        nd->next = temp->next;
        temp->next = nd;
        nd->next->prev = nd;
        nd->prev = temp;
    }
}

// adds the object at the starting of the list
void addFirstLL(LinkedList* ll, void* obj) {
    addAtLL(ll, 0, obj);
}

// adds the object at the end of the list
void addLastLL(LinkedList* ll, void* obj) {
    addInLL(ll, obj);
}

// removes all the elements from the list
void clearLL(LinkedList* ll) {
    ll->head = ll->tail = NULL;
    ll->size = 0;
}

// checks if the object is present in the list or not
int containsLL(LinkedList* ll, void* obj) {
    Node* temp = ll->head;

    while(temp != NULL) {
        if(temp->obj == obj) {
            return 1;
        }

        temp = temp->next;
    }

    return 0;
}

// returns the object at the specified index from the list
void* getLL(LinkedList* ll, int index) {
    if(index < 0 || index >= ll->size) {
        return NULL;
    }

    Node* temp = ll->head;
    int i = 0;

    while(i < index) {
        temp = temp->next;
        i++;
    }

    return temp->obj;
}

// checks if the list is empty or not
int isEmptyLL(LinkedList* ll) {
    return ll->size == 0;
}

// returns the first element of the list
void* getFirstLL(LinkedList* ll) {
    if(isEmptyLL(ll)) {
        return NULL;
    }

    return ll->head->obj;
}

// returns the last element of the list
void* getLastLL(LinkedList* ll) {
    if(isEmptyLL(ll)) {
        return NULL;
    }

    return ll->tail->obj;
}

// returns the index of first occurence of the object in the list
int indexOfLL(LinkedList* ll, void* obj) {
    Node* temp = ll->head;
    int index = 0;

    while(temp != NULL) {
        if(temp->obj == obj) {
            return index;
        }

        index++;
        temp = temp->next;
    }

    return -1;
}

// returns the index of last occurence of the object in the list
int lastIndexOfLL(LinkedList* ll, void* obj) {
    Node* temp = ll->tail;
    int index = ll->size - 1;

    while(temp != NULL) {
        if(temp->obj == obj) {
            return index;
        }

        index--;
        temp = temp->prev;
    }

    return -1;
}

// removes the object from the specified index in the list
void* removeAtLL(LinkedList* ll, int index) {
    if(index < 0 || index >= ll->size) {
        return NULL;
    }

    void* result = NULL;

    if(index == 0) {
        result = ll->head->obj;
        ll->head = ll->head->next;
        if(ll->head == NULL) {
            ll->tail = NULL;
        } else {
            ll->head->prev = NULL;
        }
    } else if(index == ll->size - 1) {
        result = ll->tail->obj;
        ll->tail = ll->tail->prev;
        if(ll->tail == NULL) {
            ll->head = NULL;
        } else {
            ll->tail->next = NULL;
        }
    } else {
        int i = 0;
        Node* temp = ll->head;
        while(i < index) {
            temp = temp->next;
            i++;
        }

        result = temp->obj;
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
    }

    ll->size--;
    return result;
}

// removes the first element from the list
void* removeFirstLL(LinkedList* ll) {
    return removeAtLL(ll, 0);
}

// removes the last element from the list
void* removeLastLL(LinkedList* ll) {
    return removeAtLL(ll, ll->size - 1);
}

// removes the first occurence of the object from the list
void removeElementLL(LinkedList* ll, void* obj) {
    Node* temp = ll->head;
    int index = 0;
    while(temp != NULL) {
        if(temp->obj == obj) {
            removeAtLL(ll, index);
            return;
        }

        index++;
        temp = temp->next;
    }
}

// sets the object at the specified index in the list
void setLL(LinkedList* ll, int index, void* obj) {
    if(index < 0 || index >= ll->size) {
        return;
    }

    Node* nd = (Node*) malloc(sizeof(Node));
    nd->obj = obj;
    nd->next = NULL;
    nd->prev = NULL;

    if(index == 0) {
        nd->next = ll->head->next;
        nd->next->prev = nd;
        ll->head = nd;
    } else if(index == ll->size - 1) {
        nd->prev = ll->tail->prev;
        nd->prev->next = nd;
        ll->tail = nd;
    } else {
        int i = 0;
        Node* temp = ll->head;
        while(i < index) {
            temp = temp->next;
            i++;
        }

        temp->prev->next = nd;
        nd->prev = temp->prev;
        temp->next->prev = nd;
        nd->next = temp->next;
        temp = NULL;
    }
}

// returns the size of the list
int sizeLL(LinkedList* ll) {
    return ll->size;
}

