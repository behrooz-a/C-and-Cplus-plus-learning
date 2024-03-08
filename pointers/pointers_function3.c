# include <stdio.h>

/* we can return a pointer */
int* adding(int *);

int main(void){
    int j=0;
    int* num= &j;
    num=adding(num);
    printf("%d",*num);
    return 0;
}
/* same thing here , we return a pointer */
int* adding(int * i){
    *i= *i+1;
    return i;
}