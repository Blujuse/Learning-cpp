# Learning cpp
 
This repo contains all material I have completed on [LinkedIn Learning](https://www.linkedin.com/learning/learning-c-plus-plus-22993675?u=42288921).

## Instructions

This repo has been created with [Visual Studio 2022](https://visualstudio.microsoft.com/vs/).

## References

For more in formation on cpp check out [this](https://en.cppreference.com/w/).

## Notes

### Chapter 2

**Integers**
* Can be unsigned or signed
* int (implementation dependant, usually 32 bits)
* char (8 bits)
* A C libary called stdint.h contains portable types like uint32_t (An unsigned 32 bit integer) and int8_t (A signed 8 bit integer)

**Floating-Point Numbers**
* Floating-point numbers represent real numbers, like pi(3.14159), 1.33333333, 0.5, -12.44
* These types implament the standard IEEE754 binary floating point
* Three types of floating-point numbers, float, double, long double
* double has a larger range than float but is more expensive to use

**Boolean Type**
* Keyword, bool
* {true, false} are defined
* Anything other than 0 is true, and zero means false

**String Class**
* Strings are not natively supported by the language
* However, they are supported in the standard libary class (string)
* string provides lots of functions to use

**Pointers**
* Special data type for memory address
* Pointers act as references to variables
* The same pointer may be use to access many different variables sequentially

**Variables**
* Temporay data storage units
* They must be declared before being used
* Delaration must pecify a type and name
* Delaration may contain an initialisation

**Constant Literals**
* int: 123, -5, 023, hexidecimal start with 0x like 0x3A, binary start with 0b like 0b1100, to specify unsigned end the number with U like 23U
* float: Must end with one decimal point and an f even if it is an integer like 23.0f
* double: Same as float just without the trailing f like 23.5 or 23.0
* char: Maybe entered as ints as long as they fall within 32 bits, must be entered between quotes single like this 'a', 'X', '\0', '\n'
* string: "Words go in here"

**Expressions**
* Temporary data storage units
* They must be declared prior to being used
* Declaration must specify a type and a name
* Declaration may contain an initialisation

**Assignments**
* A line of code that assigns a value to a variable
* Must contain a left-hand-side and a right-hand-side expression
* The left-hand-side expression must be able to hold a value
* The expression data types must match (This is not enforced by the compiler, so YOU are responsible)
* e.g. bool myFlag; myFlag = true;

**Popular Operations**
* Arithmatic: + (Addition), - (Subtraction), * (Multiplication), / (Division), % (Modulo, remainder of a division)
* Bitwise: & (And), | (Or), ~ (Not), ^ (Xor), These are bitwise not logical
* Logical: && (And), || (Or), ! (Not), These would usually be used in if statements
* Relational: == (Equal To), != (Not Equal To), > (Greater Than), < (Less Than), >= (Greater Than or Equal To), <= (Less Than or Equal To)
* Pointer: * (Prefix asterix used to give access to the variable the pointer is pointing to), & (Prefix ampersand used to get the address of the variable to its right), -> (Arrow which gives access to members of classes or structures from a pointer)

**Preprocessor Directives**
* Code is preprocessed prior to compiling
* Directives tell the preprocessor what to add or remove in thee code
* Directives like (Hash)include, are useful for libaries, constants, selecting code blocks, etc...

**Constants**
* Identifiers with values that will not chamge during execution
* Useful as parameter in code
* May be implemented with directives or as variables

**Constants as Directives**
* The (Hash)define directive schedules a find-and-replace operation so everything will be replaced by its value
* The use of (Hash)define is sometimes discouraged, macros have no context, no compiler enforcement for basic features, like types and syntax correctness for macros

**The const Qualifier**
* Used in regular declaration
* Declaration specify a type
* Scope encapsulation is enforced
* const not the same in c and cpp

**Arrays**
* Collections of data, each is accessible by an index
* Homogeneous, elements will be of the same data type
* Fixed size
* Contiguous in memory, whole array is a sequential block

**Strings**
* Not a native type in cpp, however can be added using (Hash)include string
* In C, strings are arrays of characters (char), a sequence of consecutive characters ending will the null character (encoded as 0)
* The std::string class comes with the cpp standard libary

**Type Casting**
* Specifying how to interpret a piece of data
* Useful for converting data types
* For example: int32_t to float
* Syntax: (unint32_t) - expression

**Enumerations**
* A convinient way of defining a set of named integer constants
* Enum: a list of named integer constants
* Inherited from C language, so not suited for object oriented programming
* So They operate in the global scope
* Limited-type safety

**Enum Classes**
* Introduced in cpp
* Also known as scoped enums or strongly typed enums
* Encapsulated within a class scope
* Type-safety enfored
* Enum classes are much better than C enums
