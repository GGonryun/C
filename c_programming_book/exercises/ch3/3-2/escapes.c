/* Exercise 3-2
 * Write a function escape(s,t) that converts characters
 * like newline and tab into visible escape sequences like
 * \n and \t as it copies the string s to t. Use a switch.
 */


void show_escapes(char s[], char t[]);

#include <stdio.h>

main() {
        char s[] = "abc\tdef\tghi\njkl\nmno\tpqr\n";
        char t[1000];
        (void) show_escapes(s, t);
        printf("old: %s\nnew: %s\n", s, t);

        printf("\n\n");

        

}

void show_escapes(char s[], char t[]) {
        char c;
        int i = 0;
        int j = 0;
        do {
                c = s[i];
                switch(c) {
                        case '\n':
                                t[i++] = '\\';
                                t[i] = 'n'; 
                                break;
                        case '\t':
                                t[i++] = '\\';
                                t[i] = 't';
                                break;
                        default:
                                t[i] = c;
                                break;
                }
                i++;
                j++;
        } while ( c != '\0' ); 
        


}
