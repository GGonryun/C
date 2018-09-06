#include <stdio.h>

main() {
    char c;
    int i;
    for(i = 0; i < 10; ++i) {
        c = getchar();
        if (c == '\n') break;
        else if (c == EOF) break;
        else 
            printf("i: %d, c: %d\n", i, c);
    }
}
