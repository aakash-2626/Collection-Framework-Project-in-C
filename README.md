# Collection Framework in C

This project includes several header files which are implementation of different classes in Collection Framework of Java.  
**\-** This project is designed keeping in mind about getting several pre-implemented generic classes just like in other programming languages.  
**\-** The Java Collections Framework helps in storing and processing the data efficiently.  
**\-** Java Collection Framework is unlikely any group of individual objects which are represented as a single unit be it of any type is known as the collection of objects.

Classes implemented in this project are

* ***ArrayList***
* ***LinkedList***
* ***Stack***
* ***Deque***
* ***HashMap***
* ***HashSet***

## `ArrayList`

The **ArrayList** header file implements all common list operations and it also permits all elements, includes null.  
**\-** ArrayList class uses a dynamic array for storing the elements.  
**\-** It is like an array, but there is no size limit.  
**\-** We can add or remove elements anytime. So, it is much more flexible than the traditional array.  
**\-** The ArrayList can have the duplicate elements also. It maintains the insertion order internally.

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
This method returns the element at the specified index from the given list. If index is invalid, returns **NULL**.

* **int isEmpty(ArrayList\* al)**  
This method returns **1** if the given list is empty else **0**.

* **int lastIndexOf(ArrayList\* al, void\* obj)**  
This method returns the index of last occurrence of the specified element in the given list.  
If element not present, returns -1.

* **int contains(ArrayList\* al, void\* obj)**  
This method returns **1** if the specified element is present in the given list else **0**.  

* **int indexOf(ArrayList\* al, void\* obj)**  
This method returns the index of first occurrence of the specified element in the given list.  
If element not present, returns -1.

* **void\* removeAt(ArrayList\* al, int index)**  
This method removes and returns the element at the specified index in the given list.  
If index is invalid, returns **NULL**.

* **void removeElement(ArrayList\* al, void\* obj)**  
This method removes the first occurrence of the specified element in the given list.

* **void set(ArrayList\* al, int index, void\* obj)**  
This method replaces the element at the specified index with the given element in the given list iff given index is valid.

* **int size(ArrayList\* al)**  
This method returns the size of the given list.  
  
## `LinkedList`

The **LinkedList** header file implements all common linked list operations and it also permits all elements, includes null.  
**\-** It provides a linked-list data structure.  
**\-** It can contain duplicate elements.  
**\-** It maintains insertion order.  
**\-** In LinkedList, manipulation is fast because no shifting needs to occur.
  
Declaration of **LinkedList** ->  

```bash
LinkedList* linkedList = (LinkedList*) malloc(sizeof(LinkedList));
```

### Methods of LinkedList ->

* **void add(LinkedList\* al, void\* obj)**  
This method appends the specified element to the end of given list.

* **void addAt(LinkedList\* al, int index, void\* obj)**  
This method appends the specified element at the specified index in the given list iff index is valid.

* **void addFirst(LinkedList\* al, void\* obj)**  
This method appends the specified element to the starting of given list.

* **void addLast(LinkedList\* al, void\* obj)**  
This method appends the specified element to the end of given list.

* **void clear(LinkedList\* al)**  
This method removes all of the elements from the given list.

* **int contains(LinkedList\* al, void\* obj)**  
This method returns **1** if the specified element is present in the given list else **0**.  

* **void\* get(LinkedList\* al, int index)**  
This method returns the element at the specified index from the given list. If index is invalid, returns **NULL**.

* **int isEmpty(LinkedList\* al)**  
This method returns **1** if the given list is empty else **0**.

* **void\* getFirst(LinkedList\* al)**  
This method returns the first element from the given list. If the list is empty, returns **NULL**.

* **void\* getLast(LinkedList\* al)**  
This method returns the last element from the given list. If the list is empty, returns **NULL**.

* **int indexOf(LinkedList\* al, void\* obj)**  
This method returns the index of first occurrence of the specified element in the given list.  
If element not present, returns -1.

* **int lastIndexOf(LinkedList\* al, void\* obj)**  
This method returns the index of last occurrence of the specified element in the given list.  
If element not present, returns -1.

* **void\* removeAt(LinkedList\* al, int index)**  
This method removes and returns the element at the specified index in the given list.  
If index is invalid, returns **NULL**.

* **void\* removeFirst(LinkedList\* al)**  
This method removes and returns the first element in the given list. If the list is empty, returns **NULL**.

* **void\* removeLast(LinkedList\* al)**  
This method removes and returns the last element in the given list. If the list is empty, returns **NULL**.

* **void removeElement(LinkedList\* al, void\* obj)**  
This method removes the first occurrence of the specified element in the given list.

* **void set(LinkedList\* al, int index, void\* obj)**  
This method replaces the element at the specified index with the given element in the given list iff given index is valid.

* **int size(LinkedList\* al)**  
This method returns the size of the given list.  

## `Stack`

The **Stack** header file implements all common stack operations and it also permits all elements, includes null.  
**\-** The Stack is a linear data structure that is used to store the collection of objects.  
**\-** It is based on Last-In-First-Out (LIFO).  
**\-** The stack data structure has the two most important operations that are **push** and **pop**.  
**\-** The **push** operation inserts an element into the stack and **pop** operation removes an element from the top of the stack.  

Declaration of **Stack** ->  

```bash
Stack* stack = (Stack*) malloc(sizeof(Stack));
```

### Methods of Stack ->

* **void push(Stack\* al, void\* obj)**  
This method pushes the specified element in the given stack.

* **int empty(Stack\* al)**  
This method returns **1** if the given stack is empty else **0**.

* **void\* pop(Stack\* al)**  
This method removes and returns the element at the top in the given stack.  
If the stack is empty, returns **NULL**.

* **void\* peek(Stack\* al)**  
This method returns the element at the top in the given stack.  
If the stack is empty, returns **NULL**.

* **int size(Stack\* al)**  
This method returns the size of the given stack.

* **int search(Stack\* al, void\* obj)**  
This method returns the offset of the latest occurrence of the specified element in the given stack.  
If element is not present, returns -1.

## `Deque`

The **Deque** header file implements all common dequeue operations and it also permits all elements, includes null.  
Declaration of **Deque** ->  
**\-** Deque is a data structure supports element insertion and removal at both ends.  
**\-** Deque is an acronym for **Double ended Queue**.  
**\-** Deque has no capacity restrictions.  

Declaration of **Deque** ->  

```bash
Deque* deque = (Deque*) malloc(sizeof(Deque));
```

### Methods Of Deque ->

* **void add(Deque\* al, void\* obj)**  
This method adds the specified element at the end of given deque.

* **void addFirst(Deque\* al, void\* obj)**  
This method adds the specified element at the starting of given deque.

* **void addLast(Deque\* al, void\* obj)**  
This method adds the specified element at the end of given deque.

* **void clear(Deque\* al)**  
This method removes all of the elements from the given deque.

* **int contains(Deque\* al, void\* obj)**  
This method returns **1** if the specified element is present in the given deque else **0**.  

* **int isEmpty(Deque\* al)**  
This method returns 1 if the given deque is empty else 0.

* **void\* getFirst(Deque\* al)**  
This method returns the first element in the given deque.  
If the deque is empty, returns **NULL**.

* **void\* getLast(Deque\* al)**  
This method returns the last element in the given deque.  
If the deque is empty, returns **NULL**.

* **void\* poll(Deque\* al)**  
This method removes and returns the first element in the given deque.  
If the deque is empty, returns **NULL**.

* **void\* removeFirst(Deque\* al)**  
This method removes and returns the first element in the given deque.  
If the deque is empty, returns **NULL**.

* **void\* removeLast(Deque\* al)**  
This method removes and returns the last element in the given deque.  
If the deque is empty, returns **NULL**.

* **int size(Deque\* al)**  
This method returns the size of the given deque.

## `HashMap`

The **HashMap** header file implements all common map operations and it also permits all elements, includes null.  
**\-** HashMap allows us to store key and value pair, where keys should be unique.  
**\-** If you try to insert the duplicate key, it will replace the element of the corresponding key.  
**\-** HashMap may have one null key and multiple null values.  
**\-** The initial default capacity of HashMap is **16** with a load factor of **0.75**.

Declaration of **HashMap** ->  

```bash
HashMap* hashMap = (HashMap*) malloc(sizeof(HashMap));
```

### Methods Of HashMap ->

* **void clear(HashMap\* map)**  
This method removes all of the mappings from the given map.  

* **int containsKey(HashMap\* map, void\* key)**  
This method returns 1 if the given map contains a mapping for the specified key, else returns 0.  

* **int containsValue(HashMap\* map, void\* value)**  
This method returns 1 if this map maps one or more keys to the specified value, else returns 0.  

* **void\* getValue(HashMap\* map, void\* key)**  
This method returns the value to which the specified key is mapped, or **NULL** if this map contains no mapping for the key.  

* **int isEmpty(HashMap\* map)**  
This method returns 1 if this map contains no key-value mapping, else returns 0.  

* **void\* putEntry(HashMap\* map, void\* key, void\* value)**  
This method associates the specified value with the specified key in this map.  

* **void\* removeEntry(HashMap\* map, void\* key)**  
This method removes the mapping for the specified key from this map if present and returns the value associated with the key.  

* **int size(HashMap\* map)**  
This method returns the number of key-value mappings in this map.

## `HashSet`

The **HashSet** header file implements all common set operations and it also permits all elements, includes null.  
**\-** HashSet stores the elements by using a mechanism called hashing.  
**\-** HashSet contains unique elements only.  
**\-** HashSet doesn't maintain the insertion order. Here, elements are inserted on the basis of their hashcode.  
**\-** HashSet is the best approach for search operations.  
**\-** The initial default capacity of HashSet is **16**, and the load factor is **0.75**.  

Declaration of **HashSet** ->  

```bash
HashSet* hashSet = (HashSet*) malloc(sizeof(HashSet));
```

### Methods Of HashSet ->

* **int add(HashSet\* set, void\* obj)**  
This method adds the specified element to this set if it is not already present and returns **1**.  
If the element is already present, returns **0**.  

* **void clear(HashSet\* set)**  
This method removes all of the elements from this set.  

* **int contains(HashSet\* set, void\* obj)**  
This method returns **1** if this set contains the specified element, else returns **0**.

* **int isEmpty(HashSet\* set)**  
This method returns **1** if this set contains no elements, else returns **0**.  

* **int remove(HashSet\* set, void\* obj)**  
This method removes the specified element from this set if it is present and returns **1**.  
If the element is not present, returns **0**.  

* **int size(HashSet\* set)**  
This method returns the number of elements in this set.  

## `Future Goals`  

Implementation of more classes of Collection Framework of Java can be added. Like  

* ***PriorityQueue***
* ***TreeSet***
* ***LinkedHashSet***
* ***TreeMap***
* ***EnumMap***

