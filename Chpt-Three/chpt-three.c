#include <stdio.h>
char strA[80] = "A string to be used for demonstration purposes";
char strB[80] = "12345678901234567890123456789012345678901234567890";

int main(void) {

    char *pA;
    char *pB;
    puts(strA);
    pA = strA;
    puts(pA);
    pB = strB;
    putchar('\n');
    while (*pA != '\0') {
        *pB++ = *pA++;
    }
    *pB = '\0';
    puts(strB);

    

    return 0;

}