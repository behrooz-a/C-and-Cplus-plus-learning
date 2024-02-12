#include <stdio.h>

/* array size is fixed but defined by user*/

int main() {
    int length;
    int i;
    
    printf("Length: ");
    scanf("%d",&length);
    int array[length];

    
    for (i=0;i<length;i++){
        printf("enter %d number :",i);
        scanf("%d",&array[i]);}
    
    for (i=0; i<length;++i){
        printf("%d\n",array[i]);
    }

    return 0;
    }