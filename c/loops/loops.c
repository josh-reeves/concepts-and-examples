#include <stdio.h>

int main()
{
    /* Loops alter the flow of a program by repeating a provided block of code
     *  until a provided condition is no longer true. There are three main types
     *  of loops.
     *
     * The while loop repeats the provided block of code while the provided
     *  condition is true. If the condition is not true at the time of the
     *  loop's execution, the code block is skipped entirely: */
    int num1 = 0;

    while (num1 < 10)
    {
        printf("num1 = %i\n", num1);

        num1++;

    }

    /* The do while loop executes its block of code a single time before
     *  checking whether the provided condition is true:*/
    do
    {
        printf("num1 = %i\n", num1);

    }
    while (num1 < 10);

    /* The for loop is useful for iterating over a collection of values (e.g. 
     *  arrays. In addition to a condition, it provides built-in syntax for
     *  declaring an "index" variable and defintng what happens to that variable
     *  after each iteration of the loop: */
    for (int i = 0; i <= 10; i++)
    {
        printf("i = %i\n", i);

    }

    // Note that loops can be nested like other control structures:
    for (int i = 0; i <= 10; i++)
    {
        num1 = i;
        
        while (num1 <= 10)
        {
            printf("num1 = %i\n", num1);

            num1++;

        }
        
    }

    /* The break and continue statements provide additional ways to control the
     *  execution of a loop. The break statement stops a loop's execution
     *  whether or not its condition is true: */
    for (int i = 0; i <= 10; i++)
    {
        printf("i = %i\n", i);

        if (i == 5)
        {
            break;

        }

    }

    // The continue skips to the next iteration of the loop:
    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        
        }

        printf("i = %i\n", i);
        
    }

    return 0;
    
}