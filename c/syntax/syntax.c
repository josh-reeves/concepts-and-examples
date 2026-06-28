// This is a single-line comment. The C language ignores whitespace.

/* This is a multi-line comment. The contents of comments are ignored by the 
 *  compiler.*/

/* The # symbol indicates a preprocessor directive. Preprocessor directives are 
 *  processed before the compilation of the file's remaining source code. 
 *
 * The include preprocessor directive tells the compiler to include the
 *  specified file. Here the specified file is the stdio.h header file, which
 *  is part of the C Standard Library. The angle brackets surrounding the
 *  filename indicate that the file resides in a standard system directory
 *  rather than the local project directory.*/
#include <stdio.h>

/* A function is a block of executable code. The code contained within the 
 *  brackets is executed. Functions can return a value, but are not required to. 
 *  The The main function is a special function that serves as the entry point 
 *  for the program.*/
int main()
{
    /* The individual instructions of which a program is comprised are referred
     *  to as statements. In C, each statement must end with a semi-colon. The
     *  statement below calls the printf function located in the stdio.h file.
     *  The printf function outputs the value in parentheses to the console:*/
    printf("Hello World!\n");

    // Note that text constants must be surrounded by quotation marks.

    /* The main function returns an integer (whole number) value. Here the value
     *  being returned is 0, which is typically used by the operating system to 
     *  indicate that the program executed successfully.*/
    return 0;

}