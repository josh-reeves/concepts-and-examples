fn main() 
{
    // Variables in rust can be declared with the let keyword:
    let name = "Alice";

    /* Note that Rust is a statically typed language despite the declaration
     *  syntax not requiring any type to be specified. The compiler will attempt
     *  to infer the type based on the assignment and throw an error if it is
     *  unable to.
     * 
     * If explicit type declaration is required or preferred, it can be
     *  accomplished by placing a type annotation after the variable name.
     * 
     * Rust provides several built-in data types. The below is a 
     *  non-comprehensive list of some of the most commonly used:
     *  - i32: 32-bit signed integers
     *  - u32: 32-bit unsigned integers
     *  - f64: 64-bit floating-point numbers
     *  - bool: boolean (true or false) values
     *  - char: single characters
     *  - strings and string slices (e.g., String and &str)
     *
     * In the example below, a type annotation is used to explicity declare the
     *  variable age as a signed 32-bit integer (i32): */
    let age: i32 = 30;

    println!("name = {}, age = {}", name, age);

    /* By default, variables in Rust are immutable, meaning their value cannot
     *  be changed after assignment. To create a mutable variable, the "mut"
     *  keyword must be used: */
    let mut counter: i32 = 0;
    counter += 1;

    println!("counter = {}", counter);

    /* Unlike most languages, Rust does not prevent a variable from being
     *  declared with the same name as an existing variable in the same scope. 
     *  Instead, the new variable shadows the old one, preventing the original
     *  from being accessed until it can be removed from memory.
     * 
     * This process, called shadowing, can be used to modify a variable's type
     *  or immutability, or to quickly modify the value of an otherwise
     *  immutable variable.
     */

    let name: &str = "Bob"; // Shadows the previous variable named "name"

    println!("name = {}", name);

}
