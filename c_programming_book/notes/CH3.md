👌: *traditions*: things that are done just because.

👀: *attention*: things that we don't fully understand yet.

🔥: *lit*: self-explanatory.

🦆: *undefined*: [things that are *implementation-defined* or *undefined* by c.](https://stackoverflow.com/questions/2397984/undefined-unspecified-and-implementation-defined-behavior).

# Chapter 3:

### Section 3-1: Statements and Blocks
  - Expressions are words, statements are sentences, semi colons are like periods.
  
### Section 3-2: If-Else
  * Syntax:
      ~~~~ 
      if (expression)
       statement1
      else
       statement2 
       ~~~~
  * 🔥: *True always means non-zero*
  * if an *else* is associated with the closest *else-less* *if*-statement.
  * 👌: Always use braces with nested *ifs*!
  
### Section 3-3: Else-If
  * Syntax:
    ~~~~
    if (expression)
       statement
    else if (expression)
       statement
    else if (expression)
       statement
    else if (expression)
       statement
    else
       statement
    ~~~~
### Section 3-4: Switch
  * Syntax
    ~~~~
    switch (expression) {
      case const-expression:
        statements
        (optional break;)
      case const-expression:
        statements
      default:
        statements
    }
    ~~~~  
  * 👌: Always put a break after the last case.
### Section 3-5: Loops - While & For
  * While Loop Syntax:
    ~~~~
    while(expression)
      statement
    ~~~~
  * For Loop Syntax
    ~~~~
    for(exp1 ; exp 2 ; exp3)
      statements
    ~~~~
  
  
