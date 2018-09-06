👌: *traditions*: things that are done just because.

👀: *attention*: things that we don't fully understand yet.

🔥: *lit*: self-explanatory.

# Chapter 2:

### Section 2-1: Variable Names
* Rules:
  1. names can only contain letters & digits & _ which counts as a letter.
  2. names are case sensitive.
  3. 👌: lowercase letters for c variable names and all uppercase for symbolic constants.
  4. 🔥: only first 31 characters are significant for internal names.
  5. external names: 6 characters all single case guaranteed by the standard.
### Section 2-2: Data Types & Sizes
* Data Types:
  1. __char:__ 1 bytle, holds one character in the local set.
  2. __int:__ integer, reflecting the natural size on the host machine.
  3. __float:__ single precision floating point.
  4. __double:__ double precision floating point.
* Qualifiers:
  1. __short & long:__ integers only! a short is at least 16 bits, while long is at least 32 bits. short < int < long! These sizes are specified by our compiler for our target hardware.
  2. __signed & unsigned:__ integer, or char! Unsigned numbers are always positive and are 0-255, signed numbers are -128  to +127. Printable characters are always positive, but a plain "char c" call's sign is machine dependent.
* Standard Headers:
  1. 👀 __<limits.h>:__ determines various properties of the various variable types.
  2. 👀 __<float.h>:__ contains a set of various platform-dependent constants related to floating point values.
  3. both of these standard headers contain symbolic constants for data type sizes & more machine/compiler properties.
### Section 2-3: Constants
* Types of constants:
  1. int = 1234;
  2. long = 123456789L; //any int too big to fit will automatically upgrade to *long*
  3. unsigned long = 21830981UL; //denoted by the U
  4. double = 1.234; double = 1e-2;
  5. float = 1.234F; float = 1e-2F; float = 2F; //is a double unless suffixed with F.
  6. long double = 1.234L; //any decimal suffixed with L becomes long double.
  7. octal = 037; //prefixed with a leading 0.
  8. hexadecimal = 0x1f; //prefixed with '0x'.
  9. long hexadecimal = 0x1ffa82bL; //suffixed with L becomes long hexadecimal
  10. unsigned long hexadecimal = 0xfUL; //suffixed with UL makes this an unsigned long constant with value 15 decimal.
  11. char = '0'; //char constants are equal to the numeric value of the char. char '0' numerically is 48. This depends on the character set.
* Escape Sequences / Escape Characters:
  1. '\a' = alert;
  2. '\b' = backspace;
  3. '\f' = formfeed;
  4. '\n' = newline;
  5. '\r' = carriage return;
  6. '\t' = horizontal tab;
  7. '\v' = vertical tab;
  8. '\\' = backslash;
  9. '\?' = question mark;
  10. '\'' = single quotes;
  11. '\"' = double quotes;
  12. '\ooo' = 1-3 octal digits.
  13. '\xhh' = 1-2 hexidecimal digits.
  14. '\0' = null/escape character;
* Constant Expressions
  0. 👀 __Expression:__ any legal combination of symbols that represent a value.
  1. constant expressions is any expression that involves only constants.
  2. string constants or string literals are represented as "I am a string" or "". 
  3. 🔥: constant expressions may sometimes be evaluated, (strings: concatenated), during __compilation__ as opposed to __runtime__. It just depends on the compiler & machine.
  4. 🔥: strings are just arrays of characters delimited by double quotes "" & terminated by a '\0' null character.
  5. 👀 __<string.h>__: contains useful string functions such as __strlen(s)__ which returns the length of a string array.
* Enumerator constant
  1. list of constant integer values such as:
  2. 🔥: *unspecified enumerator values* begin at 0, and increase by 1 for the following value.
  3. ex: enum boolean { NO, YES }; //NO = 0, YES = 1; 
  4. ex: enum escapes { BELL = '\a', BACKSPACE = '\b', TAB = '\t', NEWLINE = '\n', VTAB = '\v', RETURN = '\r' }; 
  5. 👌: enumerators are usually better than defines because we have the values generated for us *and* enum type variables offer us the opportunity to be checked by the compiler one last time.
### Section 2.4: Declarations
* Rules:
  1. All variables must be declared before use.
  2. __Declaration:__ specifies a type and contains a list of 1 or more variables. ex *int lower, upper* or *char c[1000]*;
  3. __Initialization:__ setting the intial value for a variable done only once before program execution or function call.
  4. You can initialize a variable when you declare it. ex *char esc = '\0';* or *int i = 0;*.
  5. Initializers may be expressions.
  6. External & Static variables are initialized to 0 by default.
  7. The *qualifier* __const__ can be added to the declaration of a variable and denotes that the following variable will not be altered.
  8. 🔥: A __const__ declaration w/ array arguments indicates the function does not change the array. 
  9. 🔥: the result when an attempt to make a change to a const is undefined by c .
  10. [Definition of *"implementation-defined"* behavior](https://stackoverflow.com/questions/2397984/undefined-unspecified-and-implementation-defined-behavior).
### Section 2.5: Arithmetic Operators
* Binary Arithmetic Operators:
  1. +, -, * , /, % (modulus).
  2. 🔥: Integer division truncates any fractional part. The direction of truncation for / is undefined by c. (The direction is whether it rounds up or down) 
  3. 🔥: % (*Modulus*) __cannot__ be applied to type *float* or *double*.
* 👀 Precedence Order (1 < 2 < 3 < 4):
  1. Binary +, - operators.
  2. Binary * , /, and & (modulus).
  3. Unary + and -
  4. 🔥: Arithmetic operators associate [left to right](https://stackoverflow.com/questions/25589257/what-does-left-to-right-associativity-mean). 
### Section 2.6 Relational & Logical Operators
* Relational Operators:
  1. >, >=, <, <=
* Equality Operators:
  1. ==, !=
* Logical Operators:
  1. &&, ||
  2. Evaluated left to right.
  3. 🔥: Evaluation stops when the truth or falsehood is known. *(Lazy programming paradigms++;)*
* 👀 Precedence Order:
  1. Relational Operators have lower precedence than arithmetic operators. ex: *i < lim-1* is the same as *i < (lim-1)*
    * *translation:* We would expect arithmetic operators in an expression to be evaluated first.
  2. Relational Operators have a higher precedence than equality operators.
  3. 🔥: && precedence is higher than ||
  4. Ex: *(i < lim-1 && (c=getchar()) != '\n' && c != EOF)* In *(c=getchar()) != '\n'* we use parenthesis to ensure that c = getchar() is completed first. != has a higher precedence than the assignment =.

  
