# c_practice
Practice repository from the c programming language by Dennis Ritchie 

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
The function `printf` will return the value '0x7ffef3f566cci' which is the address of pizza.
