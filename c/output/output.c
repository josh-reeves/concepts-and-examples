#include <stdio.h>

int main()
{
    /* In C, the printf function is commonly used to output values and text to
     *  the console. In order to outpu a constant, explicit text value, it must
     *  be surrounded by double quotes:*/
    printf("Hello world!");

    /* In order to output a new line, an escape sequence must be used. Escape
     *  sequences are special character combinations that represent specific
     *  characters. Usually these characters would be otherwise impossible to
     *  represent via text. In C, the newline escape sequence is \n:*/
    printf("\n");

    /* Other common escape sequences include tab (\t), double-quote ('\"") and
     *  backslash (\\):*/
    printf("\"This \\ is some \toddly forrmatted text,\" read the terminal.\n");

    /* In order to output a variable's value with the printf function, a format
     *  specifier must be used. Format specifiers consist of a percent symbol
     *  followed by a letter indicating the type of variable that will be 
     *  provided. The specifier must be placed within double quotes, either by
     *  itself or alongside other text. The variable is provided via a second 
     *  argument, and appears in place of the format specifier:*/
    int x = 5;
    printf("The value of x is %d.\n", x);

    /* If mutliple format specifiers are provided, the order of the provided
     *  variables will determine the order in which they are parsed. Each 
     *  format specifier must have a corresponding variable, and the
     *  corresponding variable must be of the type indicated by the format
     *  specifier in order to avoid errors and/or unexpected behavior:*/
    int y = 7;
    printf("The value of x is %d. the value of y is %d.\n", x, y);

    /* There are a variety of format specifiers. Some of the most common ones
    *   can be found below:
    *       Format Specifier        Data Type
    *       %d or %i                integer
    *       %f or %F                float
    *       %lf or %f               double
    *       %c                      char
    *       %s                      string
    */

    /* Note that in newer versions of C, %f can be used for both doubles and
     *  floats. This is because newer versions of the printf function recast
     *  provided floats as doubles. The precision used when outputting either
     *  data-type can be specified by placing a period and the desired number of
     *  decimal places between the % symbol and the f:*/
    float f = 1.58393321;
    printf("%.8f\n", f);

    double d = 1.5239123532138295;
    printf("%.16f\n", d);

    return 0;

}