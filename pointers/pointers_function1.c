# include <stdio.h>

/* we get the address in memory of the variable */
void adding(int *);
int main(void){
    int num=0;
    adding(&num);
    printf("%d",num);
    return 0;
}
/* the function gets the value from the address and icreases by one then hold it back at the variable address */
void adding(int * i){
    *i= *i+1;
}