# include <stdio.h>

int sum1(int a, int b){
    int c= a+b;
    return c;
    
}


int main (){
    int x,y;
    puts("enter two numbers");
    scanf("%d %d", &x,&y);
    int z=sum1(x,y);
    printf("sum a and b is %d", z);
    return 0;
}


