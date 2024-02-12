# include <stdio.h>

int main(){
    int a,b;
    int *ptr;

    a=564;
    ptr=&a;
    b=*ptr; 
    /* memory location is employed. & is the address of operator and if we use the pointer variable without * keeps the address */
    printf("The value of a is %d and the value of b is %d",a,b);

    return 0;
}