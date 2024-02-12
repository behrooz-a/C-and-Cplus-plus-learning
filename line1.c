# include<stdio.h>

void line(void){
    int a;
    for (a=0;a<=80; a++)
       putchar('-');
    putchar('\n');
}
int main(){
    line();
    return 0;
}
