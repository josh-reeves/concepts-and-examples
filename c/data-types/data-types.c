#include <stdio.h>

int main()
{
    /* C is a strongly typed language. This means that all variables must be 
     *  assigned a specific data type. The language provides the following basic 
     *  data types:*/

    /* Integers, seen above, store negative or positive whole numbers. The
     *  exact amount of memory used by a type is determined by the compiler
     *  based on a variety of factors, but integers commonly use 2 - 4 bytes:*/
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
    double d = 1.2345678235821;
    printf("d: %.16f ", d);

    /* C also provides a variety of keywords that can be used to modify the
     *  amount of memory a variable uses, its range, etc., as well as
     *  implementation-specific extended types. The full list of types is 
     *  extensive: https://en.wikipedia.org/wiki/C_data_types*/

    /* In order to pass or assign a value of one type to a function or variable
     *  of a different type, the value must be converted to the appropriate
     *  type. This can occur either implicitly or explicitly.
     * 
     * Implicit conversion occurs when the compiler attempts to automatically
     *  convert one type to another:*/
    int x = 2.50;
    printf("x: %i ", x);

    /* The value of x becomes 2 because integers are not capable of storing 
     *  decimal values. Note that once this occurs, the remaining 0.50 is
     *  effectively gone forever. Attempting to convert x to a floating point
     *  will not restore the value after the decimal. For this reason, it's
     *  generally wise to avoid converting from a type to one with less
     *  precision.*/
    float xFloat = x;
    printf("xFloat: %f ", xFloat);

    /* Explicit conversion, or "casting" occurs when the target type is placed
     *  in parentheses before the value to be converted. In the example below,
     *  the value of 5/2 will be returned as 2.000...:*/
    float quotient = 5/2;
    printf("quotient: %f ", quotient);

    /* This is because both 2 and 5 are integer values. Casting one or both of
     *  the equation's terms as a float will cause it to output the expected
     *  value:*/
    quotient = (float)5/2;
    printf("quotient: %f ", quotient);
    
    return 0;

}