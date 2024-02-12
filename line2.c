# include<stdio.h>

void line(void);

int main(){
    line();
    return 0;
}

void line (){
    int a;
    for (a=0;a<=80; a++)
       putchar('-');
    putchar('\n');
    puts("------------------------------------");
}