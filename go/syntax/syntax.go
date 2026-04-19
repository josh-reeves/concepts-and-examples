// This is the syntax for a single-line comment.

/* This is the syntax for a multi-line comment. As with other languages, Go
 *  ignores the contents of comments.*/

/* All go programs are part of a package. The below delcares that this program
 *  is part of the main package. Note that all executable Go programs require a
 *	main package.*/
package main

/* Statements in Go can be concluded with either a semi-colon or a new line. In
 * 	the latter case, a semi-colon is implicitly added to the line even if it
 *	isn't shown in the source code.*/

// Imports the files in the fmt package for use.
import (
	"fmt"
)

/* The func keyword is used to declare a function. Go requires that all main
 *	packages include a main function.
 *
 * Note that Go does not allow the opening bracket to be placed at the start of
 *	a line.*/
func main() {
	// Calls the Println function from the fmt package:
	fmt.Println("Hello world!")

}
