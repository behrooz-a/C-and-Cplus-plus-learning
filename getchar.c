/* C program to read multiple characters
// using getchar(): */
#include <stdio.h>
 

int main()
{
    int s = 13;
    char x;
    while (s--) {
        x = getchar();
        putchar(x);
    }
    return 0;
}