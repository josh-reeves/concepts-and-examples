#include <stdio.h>
#include <stdbool.h>

int main()
{
    /* An array is a data structure that allows multiple values of the same type
     *  to be stored with a single identifer. C provides multiple ways to 
     *  declare arrays. The most straightforward involves adding brackets after 
     *  the identifier containing the number of items the array can hold: */
    int numbers[5];

    /* The capacity can also be omitted, in which case the array must be
     *  initialized at declaration by providing its values via a comma-separated
     *  list contained within brackets:*/
    int moreNumbers[] = {0, 1, 2, 3, 4};

    /* In either case, it is important to note that arrays are a fixed-size
     *  data structure, meaning that their capacity cannot be changed once it
     *  has been set.
     *
     * This is because, when an array is created, the compiler reserves a 
     *  contiguous block of memory large enough to contain all of the items in
     *  the array. This makes specific data operations, such as reading a value,
     *  incredibly quick, but also means that the memory allocated to the array
     *  cannot be easily resized. 
     * 
     * As with variables, the sizeof operator can be used to obtain the size of
     *  an array in bytes: */
    printf("The size of numbers in bytes is %i\n", sizeof(numbers));    

     /* The items stored within an array are referred to as the array's
      *  elements. Each element can be accessed and/or updated independently
      *  by using its index: The location in the array at which the element
      *  resides. An item's index is represented by a number between 0 and one
      *  less than the array's capacity (computers begin counting from 0). In C
      *  this is also placed in brackets following the array's identifier. The
      *  below updates the value of the first element of the numbers array: */
    numbers[0] = 4;
    printf("numbers[0] = %i\n", numbers[0]);

    /* It is also possible to create an array of arrays. This is referred to 
     *  as a two-dimensional array (Standard arrays are single dimension
     *  arrays.) C provides a special syntax for this type of array, where two
     *  sets of brackets are used following the array's identifier: */
    int matrix[2][3];

    /* The first bracket specifies the number of arrays, and the second bracket
     *  specifies the capacity of each of these arrays. This can also be thought
     *  of as a table, with the first bracket representing the number of rows
     *  and the second representing the number of columns.*/
    matrix[0][2] = 5;
    printf("The second element of the first array in the matrix is %i\n", matrix[0][2]);

    /* The same convention can be used to create a three-dimensional array: An
     *  array of arrays of arrays: */
    bool vertices[4][4][4];
    vertices[3][2][1] = true;

    return 0;

}