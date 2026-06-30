#include <stdio.h>

int main()
{
    /* When a variable is declared, the compiler reserves the appropriate amount
     *  of memory as a block and uses the variable's identifier to refer to the
     *  memory address at the beginning of that block: */
    int num = 50;
    printf("num: %i\n", num);

    /* The memory address a variable references can be retrieved in hexadecimal
     *  form by using the reference operator: */
    printf("Address of num: %p\n", &num);

    /* The address returned by the reference operator is referred to as a
     *  pointer. Pointers can also be stored in variables. Variables that store
     *  pointers are, themselves, often referred to as pointers. To create a
     *  pointer variable, the dereference operator (*) is appended to the
     *  variable's type during declaration: */
    int* numPtr = &num;
    printf("numPtr: %p \n", numPtr);

    /* When used outside of declaraction, the dereference operator is used to
     *  access the value stored at a pointer's address: */
    printf("value at numPtr: %i\n", *numPtr);

    /* Pointers can also be used with arrays: */
    int nums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 10; i++)
    {
        printf("Address of nums[%i] %p", i + 1, &nums[i]);

        if (i < 9)
        {
            printf(", ");

        }

    }

    printf("\n");

    /* Interestingly, an array's identifier itself is actually a pointer to the
     *  first element of an array:*/
    printf("Address of nums: %p\n", nums);

    /* When used as a pointer, subsequent elements of the array can be used by
     *  adding 1 multiplied by the element's index to the array's identifier:*/
    printf("Address of second element of nums: %p\n", nums + 1);
    printf("Address of third element of nums: %p\n", nums + 2);
    printf("Address of fourth element of nums: %p\n", nums + 3);

    /* Because they represent numerical values, pointers can be added to and 
     *  subtracted from: */
    int* numsPtr = (nums + 4);
    printf("Address of fifth element of nums: %p\n", nums);

    // They can also be used with the increment and decrement operators:
    numsPtr++;
    printf("Address of sixth element of nums: %p\n", nums);

    /* Note the incrementing the pointer increases its value by 4. This is
     *  because an integer uses 4 bytes of memory. This can be observed by
     *  reviewing the addresses of each element of the nums array: Each
     *  element's address value is 4 greater than the previous element's.
     * 
     * If chars were to be used instead, incrementing the pointer would increase
     *  its value by 1. Floating points would use 4, etc. */

    return 0;
    
}