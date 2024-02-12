#include <stdio.h>
# define LENGTH 5
/* array size is fixed*/

int main() {
    int array[LENGTH];
    int i;
    for (i=0;i<LENGTH;i++){
        printf("array[%d]=",i);
        scanf("%d",&array[i]);}
    puts("");
    for (i=0; i<LENGTH; ++i)
        printf("array[%d] = %d\n", i,array[i]);   
    
    
    return 0;
}