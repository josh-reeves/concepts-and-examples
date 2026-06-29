#include <stdio.h>

int main()
{
    /* When a variable is declared, the compiler reserves the appropriate amount
     *  of memory as a block and uses the variable's identifier to refer to the
     *  memory address at the beginning of that block:*/
    int num = 50;
    printf("num: %i\n", num);

    /* The memory address a variable references can be retrieved by using the
     *  reference operator:*/
    printf("Address of num: %p\n", &num);

    /* The address returned by the reference operator is referred to as a
     *  pointer. Pointers can also be stored in variables. Variables that store
     *  pointers are, themselves, often referred to as pointers. To create a
     *  pointer variable, the dereference operator (*) is appended to the
     *  variable's type during declaration:*/
    int* numPtr = &num;
    printf("numPtr: %p \n", numPtr);

    /* When used outside of declaraction, the dereference operator is used to
     *  access the value stored at a pointer's address:*/
    printf("value at numPtr: %i\n", *numPtr);

    return 0;
    
}