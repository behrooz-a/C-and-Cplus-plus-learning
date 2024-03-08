#include<stdio.h>
/* this code give us the sum of the elements in an array*/
int main(void){

    int array[4] ={0,1,2,3};
    int sum, *pr;
    sum=0;

    for (pr=array; pr<&array[4]; pr++){
        sum +=*pr;
   
    }
    printf("%d\n", sum);
    return 0;
}