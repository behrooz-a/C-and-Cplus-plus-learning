#include <stdio.h>

/*  the pointer will move forward one memory address and locate us at the next element of the array */

int main(void){

    int array[10];
    int *pr;
    pr = &array[0];
    *(pr+1) = 10;

    printf("%d\n", array[1]);

    return 0;

}