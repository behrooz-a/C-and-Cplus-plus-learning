#include <stdio.h>

/* array size is fixed but defining by user*/


int main() {
    int length;
    int i;
    printf("Length: ");
    scanf("%d",&length);
    int array[length];
    
    for (i=0;i<length;i++){
        printf("array[%d]=",i);
        scanf("%d",&array[i]);}
    puts("");
    for (i=0; i<length; ++i)
        printf("array[%d] = %d\n", i,array[i]); 


    
    return 0;
}