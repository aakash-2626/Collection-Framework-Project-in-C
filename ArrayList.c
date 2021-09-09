#include "ArrayList.h"

// adds the object at the end of the list
void add(ArrayList* al, void* obj) {
    if(al->size == 0) {
        al->array = (void**) malloc(10 * sizeof(void*));
        al->size = 10;
    } else if(al->curPosition == al->size) {
        al->size <<= 1;
        al->array = (void**) realloc(al->array, al->size * sizeof(void*));
    }
    
    al->array[al->curPosition++] = obj;
}

// adds the object at the specified index in the list
void addAt(ArrayList* al, int index, void* obj) {
    if(index < 0 || index >= al->curPosition) {
        return;
    } else if(al->curPosition == al->size) {	
        al->size <<= 1;
        al->array = (void**) realloc(al->array, al->size * sizeof(void*));
    }
    
    int temp = 1;
    al->array[al->curPosition] = &temp;
    for(int i = al->curPosition; i > index; i--) {
        al->array[i] = al->array[i - 1];
    }
    
    al->array[index] = obj;
    al->curPosition++;
}

// removes all elements from the list
void clear(ArrayList* al) {
    free(al->array);
    al->array = NULL;
    al->size = al->curPosition = 0;
}

// returns the object at the specified index from the given list
void* get(ArrayList* al, int index) {
    if(index < 0 || index >= al->curPosition) {
        return NULL;
    }
    
    return al->array[index];
}

// checks if the list is empty or not
int isEmpty(ArrayList* al) {
    return al->curPosition == 0;
}

// returns the index of last occurence of the object in the list
int lastIndexOf(ArrayList* al, void* obj) {
    for(int i = al->curPosition - 1; i >= 0; i--) {
        if(al->array[i] == obj) {
            return i;
        }
    }
    
    return -1;
}

// checks if the object is present in the list or not
int contains(ArrayList* al, void* obj) {
    for(int i = 0; i < al->curPosition; i++) {
        if(al->array[i] == obj) {
            return 1;
        }
    }
    
    return 0;
}

// returns the index of the first occurence of the object in the list
int indexOf(ArrayList* al, void* obj) {
    for(int i = 0; i < al->curPosition; i++) {
        if(al->array[i] == obj) {
            return i;
        }
    }
    
    return -1;
}

// removes and returns the object from the specified index in the list
void* removeAt(ArrayList* al, int index) {
    if(index < 0 || index >= al->curPosition) {
        return NULL;
    }
    
    void* result = al->array[index];
    for(int i = index; i < al->curPosition - 1; i++) {
        al->array[i] = al->array[i + 1];
    }
    
    al->curPosition--;
    return result;
}

// removes the first occurence of the object from the list
void removeElement(ArrayList* al, void* obj) {
    int index = indexOf(al, obj);
    removeAt(al, index);
}


// sets the element at the index in the given list
void set(ArrayList* al, int index, void* obj) {
    if(index < 0 || index >= al->curPosition) {
        return;
    }
    
    al->array[index] = obj;
}


// returns the size of the list
int size(ArrayList* al) {
    return al->curPosition;
}
