#include <stdlib.h>

typedef struct ArrayList {
    void** array;
    int curPosition;
    int size;
} ArrayList;

void add(ArrayList* al, void* obj);
void addAt(ArrayList* al, int index, void* obj);
void clear(ArrayList* al);
void* get(ArrayList* al, int index);
int isEmpty(ArrayList* al);
int lastIndexOf(ArrayList* al, void* obj);
int contains(ArrayList* al, void* obj);
int indexOf(ArrayList* al, void* obj);
void* removeAt(ArrayList* al, int index);
void removeElement(ArrayList* al, void* obj);
void set(ArrayList* al, int index, void* obj);
int size(ArrayList* al);
