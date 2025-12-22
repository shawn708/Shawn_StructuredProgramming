# Assignment 3: Variables and Pointers in C

## Task 1: Pointer Concepts

### 1. Difference between a Normal Variable and a Pointer
A normal variable stores a value directly, while a pointer stores the memory address of another variable.

- Normal variable: stores actual data
- Pointer: stores address of data
- Value access:
  - Normal variable → variable name
  - Pointer → dereferencing using *

Example:
int x = 10;
int *p = &x;

### 2. Variable Declaration vs Pointer Declaration
Variable declaration reserves memory for a value.
Pointer declaration reserves memory for storing an address.

Example:
int a;        // variable
int *ptr;     // pointer

The & operator is used to get the address of a variable.
The * operator is used to access the value stored at an address.

### 3. Pointer Dereferencing
Dereferencing means accessing the value stored at the memory address held by a pointer.

Example:
int x = 10;
int *p = &x;
*p = 20;   // modifies x

### 4. When Pointers are Preferred
- Passing large data to functions efficiently
- Modifying variables inside functions
- Dynamic memory allocation

Example:
- Swapping two numbers
- Arrays and strings

### 5. Limitations and Risks of Pointers
- Dangling pointers
- Null pointer dereferencing
- Memory leaks
- Harder debugging

### 6. Call by Value vs Call by Reference
Call by value passes a copy of the variable.
Call by reference passes the address of the variable.

### 7. Practical Scenarios
a) Call by value:
- When original data should not change

b) Call by reference:
- When function needs to modify original data
- For efficiency with large data
