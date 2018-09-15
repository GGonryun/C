#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
        char a[] = "0x1A";        
        

        printf("%d\n",htoi(a));
}

int htoi(char s[]) {
        int i;
        int sum = 0;
        int j = strlen(s) - 3;
        for( i = 2 ; i < strlen(s) ; i++, j--) {
                if(isdigit(s[i])) {
                        sum += ((s[i] - '0') * pow(16.0, j));
                } else if (s[i] >= 'A' && s[i] <= 'F') {
                        sum += (s[i] - 'A' + 10);
                }
        }
        return sum;
}


