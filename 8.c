#include<stdio.h>
int main(void) {
    int x=3;
    int *p=&x;
    printf("%d",*p);
    return 0;
}