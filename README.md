# DSA concepts explained

## Books
### For Algorithms
- Cormen
- Fundamentals of Algorithms by horrowitz
- Goodrich

### For Data structures
- Tenenbaum
- Sahani
***

## Declaration and Initialization
It's a good practice to **initialize** variables whenever you **declare** them.
```
int number = 0;
```
***

## Structures
- Structures have a concept called ***padding*** which allocates the biggest memory of a structure to its char member. *Note : Refer online*.
- 'struct' is not mandatory in c++ while declaring and initializing, but compulsory in c.

## Pointers
### Why Pointers?
- Accessing Heap.
- Accessing Resources.
- Parameter passing.

### code
```
int a = 10;
// pointer declaration
int *p;
// initializing
p = &a;
// derefrencing
printf("%d", *p);
```
- '*' only for declaration and derefrencing, no need for assigning.
- For array A -> no need of '&', cause name of an array A itself is the starting address of the array.

```
A={1,2,3}
p=A //or
p=&A[0]
```

### Heap memory
#### in c
- type cast coz malloc() returns void pointer.
```
#include <stdlib.h>
p = (int *)malloc(5 * sizeof(int));
free(p);
```

#### in c++
```
p = new int[5];
delete []p;
```
***
## Reference in C++
- its nothing but another name to a variable.
- must be initialized during declaration.
- useful in parameter passing.
```
int &r = a;
```
***
## Pointer to Structure
```
struct Rectangle r={10,5};
struct Reectangle *p = &r;
(*p).length = 20;
*p->length = 20;
p = NULL;
```
- dot operator takes precedence so paranthesis is used.
- for normal/data variable use dot operator.
- for pointer/address variable use arrow operator.

***
## Functions
### Pass by value
In pass by value, any changes made to *formal* parameter will not be reflected in actual parameters.
#### When to use?
- when we don't need to modify actual parameters.
- can also be used if function returns some value.
***

## Class
### Types of function in a class
- constructor
- facilitators -> works on data members.
- accessor -> getter function
- mutator -> setter function.
- destructor.
***

## Access modifier

***

## Data Structure
The arrangement or organizing of the data inside the main memory (during execution time) for efficient utilization by the application or program is know as **Data Structure**.

***
## Memory
Main memory(ram) is divided into manageable pieces called as segment, whose size is 64kB.
***

## Time and Space Complexity
### Time Complexity
Time taken for executing a statement.

## Recursion
Recursive function has two phases
- Calling phase/ calling time -> Ascending phase.
- Returning phase/ returning time -> descending phase.

**Note**: *Difference between loop and recursion is that, loop only has ascending phase, whereas recursion has both*.