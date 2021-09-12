# Collection Framework in C

Just Like different classes of Collection Framework in Java, this project includes several header files which are the implementations of several Data Structures. These can be used to group multiple elements into a single unit.

**\-** This project is designed keeping in mind the reason why it is hard for programmers to work on Data Structures in C.  
**\-** This project will provide pre-implementations of several Data Structures which will help programmers to work easily.  
**\-** These header files helps in storing and processing the data efficiently as these are designed in such a way that user can store can type of data in them, whether it is a variable, array, struct etc.  

> **_NOTE:_**  Must include stdlib.h header file in your program before including any of these header files as these header files have  
               dependency on stdlib.h header file.

Header Files implemented in this project are

* ***ArrayList***
* ***LinkedList***
* ***Stack***
* ***Deque***
* ***HashMap***
* ***HashSet***
* ***PriorityQueue***

## `Steps to include this Library into your System`

* Clone this repository into your system.
* Run the ***make*** command.
* Now include the required header files according to your requirement in your program.
* When you want to compile your program file, use the command :
  >**gcc -o programFileName programFileName.c -L. -lCollections**
* Now to run your program, use the command :  
  >**./programFileName**

## `ArrayList`

The **ArrayList** header file implements all common list operations and it also permits all elements.  
**\-** It uses a dynamic array for storing the elements.  
**\-** It is like an array, but there is no size limit.  
**\-** We can add or remove elements anytime. So, it is much more flexible than the traditional array.  
**\-** The ArrayList can have the duplicate elements also. It maintains the insertion order internally.  

Including **ArrayList** in the program ->  

```bash
#include "ArrayList.h"
```

Declaration of **ArrayList** ->  

```bash
ArrayList* arrayList = (ArrayList*) malloc(sizeof(ArrayList));
```

### Methods Of ArrayList ->

* **void add(ArrayList\* al, void\* obj)**  
This method appends the specified element to the end of given list.

* **void addAt(ArrayList\* al, int index, void\* obj)**  
This method appends the specified element at the specified index in the given list iff index is valid.

* **void clear(ArrayList\* al)**  
This method removes all of the elements from the given list.

* **void\* get(ArrayList\* al, int index)**  
This method returns the element at the specified index from the given list. If the index is invalid, returns **NULL**.

* **int isEmpty(ArrayList\* al)**  
This method returns **1** if the given list is empty else **0**.

* **int lastIndexOf(ArrayList\* al, void\* obj)**  
This method returns the index of last occurrence of the specified element in the given list.  
If the element is not present in the given list, returns -1.

* **int contains(ArrayList\* al, void\* obj)**  
This method returns **1** if the specified element is present in the given list else **0**.  

* **int indexOf(ArrayList\* al, void\* obj)**  
This method returns the index of first occurrence of the specified element in the given list.  
If the element is not present in the given list, returns -1.

* **void\* removeAt(ArrayList\* al, int index)**  
This method removes and returns the element at the specified index in the given list.  
If the index is invalid, returns **NULL**.

* **void removeElement(ArrayList\* al, void\* obj)**  
This method removes the first occurrence of the specified element in the given list.

* **void set(ArrayList\* al, int index, void\* obj)**  
This method replaces the element at the specified index with the given element in the given list iff given index is valid.

* **int size(ArrayList\* al)**  
This method returns the size of the given list.  
  
## `LinkedList`

The **LinkedList** header file implements all common linked list operations and it also permits all elements.  
**\-** It provides a linked-list data structure.  
**\-** It can contain duplicate elements.  
**\-** It maintains insertion order.  
**\-** In LinkedList, manipulation is fast because no shifting needs to occur.  

Including **LinkedList** in the program ->  

```bash
#include "LinkedList.h"
```
  
Declaration of **LinkedList** ->  

```bash
LinkedList* linkedList = (LinkedList*) malloc(sizeof(LinkedList));
```

### Methods of LinkedList ->

* **void addInLL(LinkedList\* ll, void\* obj)**  
This method appends the specified element to the end of given list.

* **void addAtLL(LinkedList\* ll, int index, void\* obj)**  
This method appends the specified element at the specified index in the given list iff index is valid.

* **void addFirstLL(LinkedList\* ll, void\* obj)**  
This method appends the specified element to the starting of given list.

* **void addLastLL(LinkedList\* ll, void\* obj)**  
This method appends the specified element to the end of given list.

* **void clearLL(LinkedList\* ll)**  
This method removes all of the elements from the given list.

* **int containsLL(LinkedList\* ll, void\* obj)**  
This method returns **1** if the specified element is present in the given list else **0**.  

* **void\* getLL(LinkedList\* ll, int index)**  
This method returns the element at the specified index from the given list. If the index is invalid, returns **NULL**.

* **int isEmptyLL(LinkedList\* ll)**  
This method returns **1** if the given list is empty else **0**.

* **void\* getFirstLL(LinkedList\* ll)**  
This method returns the first element from the given list. If the list is empty, returns **NULL**.

* **void\* getLastLL(LinkedList\* ll)**  
This method returns the last element from the given list. If the list is empty, returns **NULL**.

* **int indexOfLL(LinkedList\* ll, void\* obj)**  
This method returns the index of first occurrence of the specified element in the given list.  
If the element is not present in the given list, returns -1.

* **int lastIndexOfLL(LinkedList\* ll, void\* obj)**  
This method returns the index of last occurrence of the specified element in the given list.  
If the element is not present in the given list, returns -1.

* **void\* removeAtLL(LinkedList\* ll, int index)**  
This method removes and returns the element at the specified index in the given list.  
If index is invalid, returns **NULL**.

* **void\* removeFirstLL(LinkedList\* ll)**  
This method removes and returns the first element in the given list. If the list is empty, returns **NULL**.

* **void\* removeLastLL(LinkedList\* ll)**  
This method removes and returns the last element in the given list. If the list is empty, returns **NULL**.

* **void removeElementLL(LinkedList\* ll, void\* obj)**  
This method removes the first occurrence of the specified element in the given list.

* **void setLL(LinkedList\* ll, int index, void\* obj)**  
This method replaces the element at the specified index with the given element in the given list iff given index is valid.

* **int sizeLL(LinkedList\* ll)**  
This method returns the size of the given list.  

## `Stack`

The **Stack** header file implements all common stack operations and it also permits all elements.  
**\-** It is based on Last-In-First-Out (LIFO).  
**\-** The stack data structure has the two most important operations that are **push** and **pop**.  
**\-** The **push** operation inserts an element into the stack and **pop** operation removes an element from the top of the stack.  

Including **Stack** in the program ->  

```bash
#include "Stack.h"
```

Declaration of **Stack** ->  

```bash
Stack* stack = (Stack*) malloc(sizeof(Stack));
```

### Methods of Stack ->

* **void push(Stack\* stk, void\* obj)**  
This method pushes the specified element in the given stack.

* **int empty(Stack\* stk)**  
This method returns **1** if the given stack is empty else **0**.

* **void\* pop(Stack\* stk)**  
This method removes and returns the element at the top in the given stack.  
If the stack is empty, returns **NULL**.

* **void\* peek(Stack\* stk)**  
This method returns the element at the top in the given stack.  
If the stack is empty, returns **NULL**.

* **int sizeOfStack(Stack\* stk)**  
This method returns the size of the given stack.

* **int search(Stack\* stk, void\* obj)**  
This method returns the offset of the latest occurrence of the specified element in the given stack.  
If element is not present, returns -1.

## `Deque`

The **Deque** is related to the double-ended queue that supports addition or removal of elements from either end of the data
structure.  
**\-** Deque is a data structure supports element insertion and removal at both ends.  
**\-** Deque can either be used as a Queue(first-in-first-out/FIFO) or as a Stack(last-in-first-out/LIFO).
**\-** Deque is an acronym for **Double ended Queue**.  
**\-** Deque has no capacity restrictions.  

Including **Deque** in the program ->  

```bash
#include "Deque.h"
```

Declaration of **Deque** ->  

```bash
Deque* deque = (Deque*) malloc(sizeof(Deque));
```

### Methods Of Deque ->

* **void addInDeque(Deque\* deque, void\* obj)**  
This method adds the specified element at the end of given deque.

* **void addFirstDeque(Deque\* deque, void\* obj)**  
This method adds the specified element at the starting of given deque.

* **void addLastDeque(Deque\* deque, void\* obj)**  
This method adds the specified element at the end of given deque.

* **void clearDeque(Deque\* deque)**  
This method removes all of the elements from the given deque.

* **int containsDeque(Deque\* deque, void\* obj)**  
This method returns **1** if the specified element is present in the given deque else **0**.  

* **int isEmptyDeque(Deque\* deque)**  
This method returns 1 if the given deque is empty else 0.

* **void\* getFirstDeque(Deque\* deque)**  
This method returns the first element in the given deque.  
If the deque is empty, returns **NULL**.

* **void\* getLastDeque(Deque\* deque)**  
This method returns the last element in the given deque.  
If the deque is empty, returns **NULL**.

* **void\* pollDeque(Deque\* deque)**  
This method removes and returns the first element in the given deque.  
If the deque is empty, returns **NULL**.

* **void\* removeFirstDeque(Deque\* deque)**  
This method removes and returns the first element in the given deque.  
If the deque is empty, returns **NULL**.

* **void\* removeLastDeque(Deque\* deque)**  
This method removes and returns the last element in the given deque.  
If the deque is empty, returns **NULL**.

* **int sizeDeque(Deque\* deque)**  
This method returns the size of the given deque.

## `HashMap`

The **HashMap** header file implements all common map operations and it also permits all elements.  
**\-** HashMap allows us to store key and value pair, where keys should be unique.  
**\-** If you try to insert the duplicate key, it will replace the element of the corresponding key.  
**\-** The initial default capacity of HashMap is **16** with a load factor of **0.75**.  
**\-** HashMap maintains no order.  

> **_NOTE:_**  Must include ArrayList.h header file in your program before including HashMap.h as this header file have  
               dependency on ArrayList.h header file.

Including **HashMap** in the program ->  

```bash
#include "HashMap.h"
```

Declaration of **HashMap** ->  

```bash
HashMap* hashMap = (HashMap*) malloc(sizeof(HashMap));
```

### Methods Of HashMap ->

* **void clearMap(HashMap\* map)**  
This method removes all of the mappings from the given map.  

* **int containsKey(HashMap\* map, void\* key)**  
This method returns 1 if the given map contains a mapping for the specified key, else returns 0.  

* **int containsValue(HashMap\* map, void\* value)**  
This method returns 1 if this map maps one or more keys to the specified value, else returns 0.  

* **void\* getValue(HashMap\* map, void\* key)**  
This method returns the value to which the specified key is mapped, or **NULL** if this map contains no mapping for the key.  

* **int isMapEmpty(HashMap\* map)**  
This method returns 1 if this map contains no key-value mapping, else returns 0.  

* **void\* putEntry(HashMap\* map, void\* key, void\* value)**  
This method associates the specified value with the specified key in this map.  

* **void\* removeEntry(HashMap\* map, void\* key)**  
This method removes the mapping for the specified key from this map if present and returns the value associated with the key.  

* **int sizeOfMap(HashMap\* map)**  
This method returns the number of key-value mappings in this map.

## `HashSet`

The **HashSet** header file implements all common set operations and it also permits all elements.  
**\-** HashSet stores the elements by using a mechanism called hashing.  
**\-** HashSet contains unique elements only.  
**\-** HashSet doesn't maintain the insertion order. Here, elements are inserted on the basis of their addresses.  
**\-** HashSet is the best approach for search operations.  
**\-** The initial default capacity of HashSet is **16**, and the load factor is **0.75**.  

> **_NOTE:_**  Must include ArrayList.h header file in your program before including HashSet.h as this header file have  
               dependency on ArrayList.h header file.

Including **HashSet** in the program ->  

```bash
#include "HashSet.h"
```

Declaration of **HashSet** ->  

```bash
HashSet* hashSet = (HashSet*) malloc(sizeof(HashSet));
```

### Methods Of HashSet ->

* **int addInSet(HashSet\* hset, void\* obj)**  
This method adds the specified element to this set if it is not already present and returns **1**.  
If the element is already present, returns **0**.  

* **void clearSet(HashSet\* hset)**  
This method removes all of the elements from this set.  

* **int setContains(HashSet\* hset, void\* obj)**  
This method returns **1** if this set contains the specified element, else returns **0**.

* **int isSetEmpty(HashSet\* hset)**  
This method returns **1** if this set contains no elements, else returns **0**.  

* **int removeFromSet(HashSet\* hset, void\* obj)**  
This method removes the specified element from this set if it is present and returns **1**.  
If the element is not present, returns **0**.  

* **int sizeOfSet(HashSet\* hset)**  
This method returns the number of elements in this set.  

## `PriorityQueue`

A **PriorityQueue** is used when the objects are supposed to be processed based on the priority.  
**\-** It is known that a Queue follows the First-In-First-Out algorithm, but sometimes the elements of the queue are needed to be processed according to the priority, that’s when the PriorityQueue comes into play.  
**\-** The PriorityQueue is based on the priority heap.  
**\-** The elements of the priority queue are ordered according to the compare function that the user passes.  

> **_NOTE:_**  Must include ArrayList.h header file in your program before including PriorityQueue.h as this header file have  
               dependency on ArrayList.h header file.

Including **PriorityQueue** in the program ->  

```bash
#include "PriorityQueue.h"
```

Declaration of **PriorityQueue** ->  

```bash
PriorityQueue* priorityQueue = (PriorityQueue*) malloc(sizeof(PriorityQueue));
```

### Methods Of PriorityQueue ->

* **void addInPQ(PriorityQueue\* pq, void\* obj, int (\*compare)(void\*, void\*))**  
This method inserts the specified element into the specified priority queue and the ordering is according to the specified compare function.

* **void clearPQ(PriorityQueue\* pq)**  
This method removes all of the elements from the specified priority queue.

* **void\* peekPQ(PriorityQueue\* pq)**  
This method retrieves, but does not remove, the head of this queue, or returns **NULL** if this queue is empty.

* **void\* removeFromPQ(PriorityQueue\* pq, int (\*compare)(void\*, void\*))**  
This method removes and returns the head of this queue, or returns **NULL** if this queue is empty.

* **int isEmptyPQ(PriorityQueue\* pq)**  
This method returns **1** if this queue contains no elements, else returns **0**.  

* **int sizeOfPQ(PriorityQueue\* pq)**  
This method returns the number of elements in this queue.

## `Future Goals`  

Implementing more header files of different Data Structures just like in Collection Framework of Java. Like  

* ***TreeSet***
* ***LinkedHashSet***
* ***TreeMap***
* ***EnumMap***
* ***WeakHashMap***

