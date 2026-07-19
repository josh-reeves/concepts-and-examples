#include <stdio.h>

/* A function is simply an executable block of code. Like variables, functions
 *  are assigned a specifc identifier, referred to as the function signature, at 
 *  declaration. This signature identifies the function's return type (i.e. the 
 *  type of value it will return after executing), name and any parameters that 
 *  will be passed into the function, in that order: */
void HelloWorld();

/* The return type of the method above is void. This is a special return type
 *  indicates that the method does not return a value. Notice also that the
 *  method above does not include a body. As with variables, C allows the
 *  separation of a function's declaration and its definition. This is also
 *  encouraged via convention for functions. */

/* While separating the declaration and definition of functions is encouraged,
 *  C also allows functions to be defined at the time they are declared. Note,
 *  however, that in either case the function must be delcared before it is
 *  called. 
 *  
 *  The below demonstrates a function with parameters being defined at the time 
 *  of declartion. Parameters are values, defined via variables, that will be
 *  passed into the function when called: */
int Add(int firstNum, int secondNum)
{
    return firstNum + secondNum;

}

/* C also allows for inline functions. Inline functions, which are specified by
 *  appending the inline keyword to the function's signature, have their code
 *  inserted by the compiler wherever they are called, rather than being added
 *  to the call stack. This can result in a slight performance increase due to
 *  the reduced overhead (Traversing the call stack takes time). 
 * 
 * In modern implementations of C, the static keyword should also be included to
 *  avoid errors in the event that the compiler decides not to inline the 
 *  function: */
static inline int QuickAdd(int firstNum, int secondNum)
{
    return firstNum + secondNum;

}

/* C also provides several built-in functions. The main function, for example,
 *  is a built-in function that serves as the entry point for the program. It 
 *  is, literally, the first function called by the system in order to run the 
 *  program: */
int main()
{
    /* The below shows the HelloWorld function defined above being called. Upon
     *  being called, the function is pushed onto the call stack, and further
     *  execution of the current function is halted until the called function
     *  returns. */
    HelloWorld();

    int num1 = 5,
        num2 = 20;

    printf("%i + %i = %i\n", num1, num2, Add(num1, num2));
    printf("%i + %i = %i\n", num1, num2, QuickAdd(num1, num2));
    
    /* Notice that, unlike the HelloWorld function, the main function has a
     *  return type of integer. This means that the function will return an
     *  integer value after execution (in this case, a numerical code indicating
     *  the state of the program at exit.). This value is defined with the
     *  return keyword, and can be supplie via, a constant (hard-coded or
     *  otherwise), variable or expression. Note that, in C, functions cannot 
     *  directly return arrays. Instead, they must either wrap the array in a 
     *  structure, or return a pointer to the first element of the array. */
    return 0;

}

// The below provides the definition for the HelloWorld function declared above:
void HelloWorld()
{
    /* It is important to keep the concept of scope in mind when working with
     *  functions. Variables declared inside the function, including its 
     *  parameters are only accessible from within the same function. If they 
     *  are called outside of the function, the compiler will not recognize them 
     *  unless they are otherwise also declared and defined outside of the 
     *  function: */
    char message[] = "Hello from the HelloWorld function!\n";
    printf(message);

}

