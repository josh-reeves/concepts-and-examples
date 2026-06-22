#include <stdio.h>

int main()
{
    /* In C, variables are declared by writing a type identifier followed by 
     *  unique name:*/
    int x;

    // To assign a value to a variable (initialization), use the = operator:
    x = 15;
    printf("x: %i, ", x);

    // A value can also be initialized at declaration:
    int y = 20;
    printf("y: %i, ", y);

    return 0;

}