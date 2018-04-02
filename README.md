# c_practice
Practice repository from the c programming language by Dennis Ritchie 

# Chapter One Exercises

**Exercies 1_1.** Run the "hello, world" program on your system. Experiment with leaving out parts of the program, to see what error messages you get.

**Answer:**
The hello world program is

````
#include <stdio.h>

int main() {
	printf("Hello World\n");
	return 0;
}
````
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
