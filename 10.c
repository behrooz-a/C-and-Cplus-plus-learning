# include <stdio.h>

int main(void){
    int i= 10;
    int j=10;
    
    scanf("%d%d", &i,&j);
    int sum=i+j;
    sum %=2;
    printf("The value of i is: %d\n", i);
    printf("The value of j is: %d\n", j);
    printf("The sum of i and j is: %d\n", sum);
    return 0;
}