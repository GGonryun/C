#include <stdio.h>

void squeeze(char s[], int c) {

        int i, j;
        
        for(i = j = 0; s[i] != '\n'; i++) {
                if(s[i] != c) {
                        s[j++] = s[i];       
                }
        }
        s[j] = '\0';

}
