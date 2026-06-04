#include <stdio.h>

int main()
{
    /* In C, variables are declared by writing a type dentifier followed by 
     *  unique name:*/
    int x;

    // To assign a value to a variable (initialization), use the = operator:
    x = 15;
    printf("x: %i, ", x);

    // A value can also be initialized at declaration:
    int y = 20;
    printf("y: %i, ", y);

    /* C is a strongly typed language, meaning all variables must be assigned a
     *  specific data type. The language provides the following basic data
     *  types: 
     * 
     *  Integers, seen above, store negative or positive whole numbers. The
     *   exact amount of memory used by a type is determined by the compiler
     *   based on a variety of factors, but integers commonly use 2 - 4 bytes:*/
    int z = 5;
    printf("z: %i, ", z);

    /* Characters typically use 1 byte of memory and store a single ASCII 
     *  character or its integer equivalent on the ASCII table:*/
    char ch = 'A';
    printf("ch: %c, ", ch);

    /* Floating Points typically use 4 bytes of memory and store decimal values
     *  up to ~7 decimal places in length:*/
    float f = 3.14;
    printf("f: %f, ", f);

    /* Doubles typically use twice as much memory as floating points and store
     *  decimal values up to 15 decimal places in length:*/
    double d = 1.2345678;
    printf("d: %lf ", d);

    /*C also provides a variety of keywords that can be used to modify the
     * amount of memory a variable uses, its range, etc., as well as
     * implementation-specific extended types. The full list of types is 
     * extensive: https://en.wikipedia.org/wiki/C_data_types*/

    return 0;

}