1) gdb can't do anything without compiling with -g which leaves additional information in the a.out file.
    * ex: *gcc -g errors.c*
    * do not use -s strip, or -O optimize.
2) we can remove this information and clean up our outfile with strip.
    * ex: *strip a.out*
3) the flag -o will rename the *output file* to whatever we specify.
    * ex: *gcc -g errors.c -o errors*
4) __Always remove any corefiles, these are like the embalmed remains of a crash.___
    * clear with *rm ./core*
    * our coresize can be set with *limit coredumpsize #*
5) execute gdb:
    * ex: *gdb -q errors*
6) the gdp prompt will appear:
    1) *list \[min , max]* or *list \[function_name]* //List without optional number values will produce 10 or we can list out numbers from min to max or even all the lines of a function by specifying the name.
    2) *whatis \[object]* //will provide a definition of a given variable, based on scope. __\*run must be executing__ 
    3) *run* //this executes the program.
    4) *break \[function]* //providing a function name and our system will stop execution right before stepping into the function.
        * *break \[file.c]:\[line_num]* //allows us to specify the file and line for the breakpoints.
    5) *next* //complete the current line and then go to the next one.
    6) *step* // run the next instruction
    7) *finish* // allows the program to run full speed until the next break
    8) *watch \[variable]* // allows us to watch the value change and report when it changes, it stops execution once the value changes.
        * *rwatch \[variable]* // acts similarly to *watch* but instead it notifies us when the value is being read!
    9) *cont* //continues execution full speed until condition changes again.
    10) *where* //current file location, current function location, current line location.
    11) *info breakpoints* //self-explanitory.
7) If our program is crashing unexpectedly use *gdb backtrace* this will provide us with function-call/stack trace.
