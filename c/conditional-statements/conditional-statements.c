#include <stdio.h>
#include <stdbool.h>

int main()
{
    /* Conditional statements alter the flow of a program's execution based on
     *  a provided value. This value can be an explicit constant, a variable or
     *  the result of an expression. C provides multiple types of conditional 
     *  statements. */

    /* If statements execute a provided block of code if the provided condition
     *  is true: */
    if (true)
    {
        printf("This will always print.\n");

    }

    /* If statements can also be paired with else and else if statements. Else
     *  statements provide an alternative block of code to execute if the 
     *  provided condition if false: */
    if (true)
    {
        printf("This will also always print.\n");

    }
    else
    {
        printf("This never will\n");

    }

    /* Else if statements provide an alternative block of code to execute if the
     *  original condition is false, and a second, provided condition is true: 
     */
    int num1 = 5;

    if (false)
    {
        printf("This will never print.\n");

    }
    else if (num1 == 5)
    {
        printf("This will print because num1 = %i.\n", num1);

    }
    else
    {
        printf("This will also never print.\n");

    }

    // Finally, if statements can be nested within each other:
    int num2 = 10;

    if (num1 == 5)
    {
        if (num2 == 10)
        {
            printf("This will print because num1 = %i and num2 = %i.\n", num1, num2);
        
        }

    }

    /* Conditonal logic can also be implemented via the switch statement. The
     *  switch statements evaluate a variable or expression and "switch" between
     *  multiple provided cases based on the result: */
    switch (num1)
    {
        case 5:
            printf ("num1 is 5.\n");

            break;
        
        case 10:
            printf ("num1 is 10.\n");

            break;
        
        default:
            printf ("num1 is unhandled.\n");

    }

    /* Note that each case should end with a break statement. If no break
     *  break staement is provided, execution of the case will "fall throuh" to
     *  the next case regardless of whether or not it is true.*/

    /* These conditionals can be nested and combined as needed. The conditional
     *  expressions can also make use of logical operators to evaluate multiple
     *  conditions at once:*/
    if (num1 == 5 && num2 == 10)
    {
        printf("This will print because num1 = %i and num2 = %i.\n", num1, num2);

    }

    return 0;

}