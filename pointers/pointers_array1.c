#include <stdio.h>

/*  the pointer has been set up to an array index and later the array index has been modified */
int main(void){
    int array[10];
    int *pr;
    pr = &array[0];
    *pr = 10;

    printf("%d\n", array[0]);

    return 0;

}