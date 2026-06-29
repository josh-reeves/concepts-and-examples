#include <stdio.h>

int main()
{
    /* A variable can be thought of as a container that holds a value. C is a
     *  strongly typed language, meaning all variables must be given a specific,
     *  defined type. In C, variables are declared by specifying the variable's
     *  type, followed by a name known as an identifer that can be used to refer
     *  to the variable.
     * 
     * The process of creating a variable is referred to as declaration. The
     *  statement below declares a variable with an identifier of x:*/
    int x;

    /* Identifiers must be unique to their scope, and cannot be the same as any
     *  of the language's reserved words. They must begin with either a letter
     *  (upper or lower case) or an underscore, and can only contain underscores
     *  and alphanumeric characters.*/

    // To assign a value to a variable (initialization), use the = operator:
    x = 15;
    printf("x: %i\n", x);

    // A variable can also be initialized at declaration:
    int y = 20;
    printf("y: %i\n", y);

    /* Multiple variables of the same type can also be delcared and initialized
     *  as part of a single statement. When this is done, the type is specified
     *  once at the beginning of the statement, and each variable declaration is
     *  separated by a comma:*/
    int a = 1,
        b,
        c = 3;
        
    b = 2;

    printf("a: %i\nb: %i\nc: %i\n", a, b, c);

    /* Constants are similar to variables. Unlike variables, however, their
     *  value cannot be changed after initialization. To declare a constant,
     *  the const keyword is used, followed by the constant's type and
     *  identifier:*/
    const int constant = 95;
    printf("constant: %i\n", constant);

    return 0;

}