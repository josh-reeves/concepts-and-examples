#include <stdio.h>

int main()
{
    /* An operator is a reserved character or sequence that performs an
     *  operation on one or more variables and/or values (operands). The C
     *  programming language provides a variety of arithmetic, assignment,
     *  comparison and logical operators. */

    /* Arithemetic operators perform arithemtic operations on one or more
     *  values:
     *  
     *  Operator    Name            Description
     *  +           Addition        Adds two values together.    
     *  -           Subtraction     Subtracts the second value from the first.
     *  *           Multiplication  Multiplies two values.
     *  /           Division        Divides the first value by the second.
     *  %           Modulus         Returns the remainder of a division
     *                               operation.
     *  ++          Increment       Increases a variable's value by 1.
     *  ==          Decrement       Decreases a variable's values by 1.
     * 
     */
    int num1 = 50,
        num2 = 20;

    printf("%i + %i = %i\n", num1, num2, num1 + num2);
    printf("%i - %i = %i\n", num1, num2, num1 - num2);
    printf("%i * %i = %i\n", num1, num2, num1 * num2);
    printf("%i / %i = %i\n", num1, num2, num1 / num2);
    printf("%i %% %i = %i\n", num1, num2, num1 % num2);
    printf("%i++ = ", num1);
    printf("++%i\n", ++num1);
    printf("--%i = ", num2); 
    printf("%i\n", --num2);

    // Note that the placement of the increment and decrement operators matters:
    int x = 5;
    int y = ++x; // Pre-increment
    // Result: x becomes 6, and y is assigned the new value (6).

    int a = 5;
    int b = a++; // Post-increment
    // Result: b is assigned the old value (5), then a becomes 6.

    /* When an expression contains multiple operators, its evaluation will
     *  follow the order of operations (PEMDAS), with sections wrapped in
     *  parentheses being evaluated first: */
    printf("%i * (%i - %i) = %i\n", num1, num2, b, num1 * (num2 - b));

    /* The assignment operator '=' is often used to assign a value to a 
     *  variable: */
    num1 = 5;
    printf("num1 = %i\n", num1);

    /* The assignment operator can also be combined with any of the arithemetic
     *   or bitwise operators as a type of shorthand: */
    num1 += 7; // This is the same as num1 = num1 + 7.
    printf("num1 = %i\n", num1);

    /* Comparison operators compare two values and return a boolean value 
     *  (true or false) based on the result. Note that in C, true and false are
     *  represented with 1 and 0 respectively:  
     * 
     *  Operator    Name            Description:
     *  ==          Equal To        Returns true if both values are equal.
     *  !=          Not Equal To    Returns true if bothe values are not equal.
     *  >           Greater Than    Returns true if the left value is greater
     *                               than the right value.
     *  <           Less Than       Returns true if the left value is less than
     *                               the right value.
     *  >=          Greater Than    Returns true if the left value is greater
     *               Or Equal To     than or equal to the right value.
     *  <=          Less Than Or    Returns true if the left value is less than
     *               Equal To        or equal to the right value.
     * 
     */
    printf("num1 == num2 = %i\n", num1 == num2);
    printf("num1 != num2 = %i\n", num1 != num2);
    printf("num1 >= num2 = %i\n", num1 >= num2);

    /* Logical operators work in tandem with comparison operators, either
     *  changing how they work or allowing multipler operators to be 
     *  combined:
     * 
     *  Operator    Name            Description
     *  !           Not             Inverts the value of the specified 
     *                               evaluation.
     *  &&          And             Returns true if both comparisons evaluate to
     *                               true. Otherwise returns false
     *  ||          Or              Returns true if either comparison evaluates
     *                               to true. Otherwise returns false.
     * 
     */
    printf("!(num1 == num2) = %i\n", !(num1 == num2));
    printf("num1 > num2 && num2 > num1 = %i\n", num1 > num2 && num2 > num1);

    /* Note that this list only includes the most commonly used operators. For
     *  a more comprehensive list, refer to 
     *  https://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B */

    return 0;

}
