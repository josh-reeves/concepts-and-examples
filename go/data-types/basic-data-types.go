package main

import (
	"fmt"
)

func main() {
	/* Go is a strongly typed language. This means that variables have static,
	 *	distinct types that cannot be changed or implicitly converted between.
	 *
	 * The Go language provides the following data listed below.*/

	// The boolean type hold a true/false value:
	var boolEx bool = false
	fmt.Println(boolEx)

	/* Numeric data types hold integer, floating point and complex number
	 *  values. They include the following types:*/

	/* Integers are typically 32-bits on 32-bit systems and 64-bits on 64-bit
	 *	systems by default:*/
	var intEx int = 5
	fmt.Println(intEx)

	// Signed 8-bit integers hold values between -128 and 127:
	var int8Ex int8 = 127
	fmt.Println(int8Ex)

	// Unsigned 8-bit integers hold can hold values between 0 and 255:
	var uint8Ex uint8 = 255
	fmt.Println(uint8Ex)

	/* The byte keyword can also be used as an alias for an unsigned 8-bit
	 *	integer:*/
	var byteEx byte = 255
	fmt.Println(byteEx)

	// Signed 16-bit integers hold values between -32768 and 32767:
	var int16Ex int16 = -32768
	fmt.Println(int16Ex)

	// Unsigned 16-bit integers hold values between 0 and 65,535:
	var uint16Ex uint16 = 65535
	fmt.Println(uint16Ex)

	/* Signed 32-bit integers hold values between -2,147,483,648 and
	 *  2,147,483,647:*/
	var int32Ex int32 = -2147483648
	fmt.Println(int32Ex)

	/* The rune keyword can also be used as an alias for an int32. It also
	 *  represents a unicode code point:*/
	var runeEx rune = 2147483647
	fmt.Println(runeEx)

	// Unsigned 32-bit integers hold values between 0 and 4,294,967,295
	var uint32Ex uint32 = 4294967295
	fmt.Println(uint32Ex)

	/* Signed 64-bit integers hold values between -9,223,372,036,854,775,808
	 *  and 9,223,372,036,854,775,807:*/
	var int64Ex int64 = -9223372036854775808
	fmt.Println(int64Ex)

	/* Unsigned 64-bit integers hold values between 0 and
	 *  18,446,744,073,709,551,615:*/
	var uint64Ex uint64 = 18446744073709551615
	fmt.Println(uint64Ex)

	/* 32-bit floating point variables hold decimal values between -3.4e+38 and
	 * 3.4e+38:*/
	var float32Ex float32 = 3.14159
	fmt.Println(float32Ex)

	/* 64-bit floating point variables hold decimal values between -1.7e+308 and
	 *  +1.7e+308:*/
	var float64Ex float64 = 128.256
	fmt.Println(float64Ex)

	// Complex64 variables contain float32 as a real and imaginary component:
	var complex64Ex complex64 = complex(9, 8)
	fmt.Println(complex64Ex)

	// Complex128 variables contain float64 as a real and imaginary component:
	var complex128Ex complex128 = complex(12, 5)
	fmt.Println(complex128Ex)

	/* Numeric data types also include the uintptr, which is large enough to
	 *  hold the bit pattern of any memory address. This data type will be
	 *  excluded for now, as pointers are beyond the scope of these notes.*/

	/* String variables hold a sequence of characters. String values must be
	 *	surrounded by double quotes:*/
	var stringEx string = "string"
	fmt.Println(stringEx)
}
