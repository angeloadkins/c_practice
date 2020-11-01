# C Programming
Practice repository from the c programming language by me

## [Chapter 1. An Introduction](#chapter-1) 

* [Getting Started](#getting-started)
* [Chapter one](#test)
* [Variables and Arithmetic Expressions]()

## [Chapter 2. Types, Operators, and Expressions]()

* [Variable Names]()
* [Data Types and Sizes]()

## [Chapter 3. Control Flow]()

* [Statement and Blocks]()
* [If-Else]()


# Chapter 1
Here is a bunch of test that will be in chapter 1.

## Getting Started

**Exercies 1_1.** Run the "hello, world" program on your system. Experiment with leaving out parts of the program, to see what error messages you get.

**Answer:**
The hello world program is

```c
#include <stdio.h>

int main() {
	printf("Hello World\n");
}
```
**Exercise 1-2.** Experiment to find out what happens when printf's argument string containts \c, where c is some character not listed above.

**Exercise 1-3.** Modify the temperature conversion program to print a heading above the table.

# Understanding Pointers 

In C pointers are a way to access the address of a variable. For example if I want to point to the address of a variable I would use the syntax

`y = &x;`

Where y the address of x is assigned to y

Let's look at the following code

````#include <stdio.h>

int main() {

        int pizza = 12;
        printf("%p ", &pizza);

        return 0;
}
````
The function `printf` will return the value `0x7ffef3f566cci` which is the address of pizza.

# Test
