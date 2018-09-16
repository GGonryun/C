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
