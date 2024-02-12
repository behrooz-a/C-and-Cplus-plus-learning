# include <stdio.h>

int main(){
    int x=12;
    int* y=&x;
    printf("%d", *y);
    return 0;
}