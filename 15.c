# include <stdio.h>
#include <stdbool.h>
int main(void){
    char c='A';
    char d='A';
    char e;
    e= getchar();
    c +=1;
    d +=32;
    printf("%c", c);
    printf("%c", d);
    printf("%c", e);
    return 0;
}