/* Comments in Rust are denoted with // for single-line comments and /* */ for 
 *  multi-line comments.*/

// The main function acts as the entry point for programs written in Rust.
fn main()
{
    /* Outputting text to the console is can be accomplished with println!.
     *  The use of ! indicates that println! is a macro rather than a regular 
     *  function. In practice, macros are often used in a manner similar to 
     *  functions. Unlike functions, however, macros can take a variable number 
     *  of arguments and generate code at compile time.*/
    println!("Hello, world!");

    /* In addition to println!, text can also be output via the print! macro,
     *  which does not automatically append a newline character to the specified
     *  output. As with most programming languages, a new line can be manually
     *  appended using the \n escape sequence.*/
    print!("Line 1\n
            Line 2\n");


}
