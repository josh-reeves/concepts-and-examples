package main

import (
	"fmt"
)

func main() {
	/* Go provides two primary ways to declare variables. The first is using the
	 *	"var" keyword, followed by the variable's name and type. Variables
	 *	declared in this manner do not require a value to be assigned to them at
	 *	the time of creation:*/
	var emptyMsg string

	/* Note that Go technically requires all variables to have a value assigned
	 *	to them. Even if a variable declared in the above manner has no value
	 *	explicitly assigned to it, Go will implicitly assign a default value to
	 *	the variable:*/
	fmt.Println(emptyMsg)

	/* Unlike many other languages, Go does not allow any unused local
	 *	variables.*/

	/* Variables created with the var keyword can also be declared without an
	 *	explicit type. In this case, however, a value must be assigned to the
	 *	variable so that Go can infer its type:*/
	var secondMsg = "Hello, world!"

	fmt.Println(secondMsg)

	/* The second primary way in which Go allows variables to be declared is via
	 *	the := operator. Variables created via the := operator do not use a type
	 *	keyword. Their type is always inferred. As such, variables declared in
	 *	this manner require a value to be assigned to them at the time of
	 *	creation:*/
	thirdMsg := "Hello again, world!"

	fmt.Println(thirdMsg)

	/* Go also allows multiple variables to be declare on the same line. When
	 *	done using the var keyword, the variables must all be of the same
	 *	type:*/
	var a, b, c int
	a = 1
	b = 2
	c = 3

	fmt.Println(a, b, c)

	/* When variables created with the var keyword don't include a type,
	 *	the variables cajn be of different types:*/
	var d, e, f = "one", "two", 3

	fmt.Println(d, e, f)

	// Multiple variables can also be declared via the := operator:
	fourthMessage, fifthMessage := "one", 2

	fmt.Println(fourthMessage, fifthMessage)

	/* Go also allows variable declarations to be grouped into a block for
	 *	easier readability:*/
	var (
		g int
		h        = 1
		i string = "two"
	)

	fmt.Println(g, h, i)

	// Constants can be declared via the const keyword:
	const pi = 3.14

	/* As with variables, a constant's type will be inferred by the compiler if
	 * it isn't explicitly defined. All constants require that a value be
	 * assigned at the time of declaration. Unlike local variables, Go allows
	 * unused constants.*/

}
