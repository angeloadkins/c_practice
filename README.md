# C Programming
Practice repository from the c programming language by me

## [An Introduction](#chapter-1) 

* [Getting Started](#getting-started)
* [Chapter one](#test)
* [Variables and Arithmetic Expressions]()

## [Types, Operators, and Expressions]()

* [Variable Names]()
* [Data Types and Sizes]()

## [Control Flow]()

* [Statement and Blocks]()
* [If-Else]()

## [Functions]()

* [Pass by reference vs pass by value]()

## [Pointers and Arrays]()

* [Introduction to Arrays]()
* [Pointers]()


# Chapter 1
Here is a bunch of test that will be in chapter 1.

## Getting Started

The first step you take in any programming languages is to write a program that prints *Hello World*. 

```c
#include <stdio.h>

int main() {
	printf("Hello World\n");
}
```

Afterwards compile the program
```console 
gcc -o hello_world hello_world.c
```
aaa

That's pretty cool right a

**Exercise 1-2.** Experiment to find out what happens when printf's argument string containts \c, where c is some character not listed above.

**Exercise 1-3.** Modify the temperature conversion program to print a heading above the table.

# Understanding Pointers 

In C pointers are a way to access the address of a variable. For example if I want to point to the address of a variable I would use the syntax

`y = &x;`

Where y the address of x is assigned to y

Let's look at the following code

```c
#include <stdio.h>

int main() {

        int pizza = 12;
        printf("%p ", &pizza);

        return 0;
}
```
The function `printf` will return the value `0x7ffef3f566cci` which is the address of pizza.

# Test
