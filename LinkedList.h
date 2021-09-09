#include <stdlib.h>

typedef struct Node {
   struct Node* next;
   struct Node* prev;
   void* obj;
} Node;

typedef struct LinkedList {
    Node* head;
    Node* tail;
    int size;
} LinkedList;

void addInLL(LinkedList* ll, void* obj);
void addAtLL(LinkedList* ll, int index, void* obj);
void addFirstLL(LinkedList* ll, void* obj);
void addLastLL(LinkedList* ll, void* obj);
void clearLL(LinkedList* ll);
int containsLL(LinkedList* ll, void* obj);
void* getLL(LinkedList* ll, int index);
int isEmptyLL(LinkedList* ll);
void* getFirstLL(LinkedList* ll);
void* getLastLL(LinkedList* ll);
int indexOfLL(LinkedList* ll, void* obj);
int lastIndexOfLL(LinkedList* ll, void* obj);
void* removeAtLL(LinkedList* ll, int index);
void* removeFirstLL(LinkedList* ll);
void* removeLastLL(LinkedList* ll);
void removeElementLL(LinkedList* ll, void* obj);
void setLL(LinkedList* ll, int index, void* obj);
int sizeLL(LinkedList* ll);
