1) gdb can't do anything without compiling with -g which leaves additional information in the a.out file.
    * ex: *gcc -g errors.c*
2) we can remove this information and clean up our outfile with strip.
    * ex: *strip a.out*
