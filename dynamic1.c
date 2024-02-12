# include <stdio.h>
# include <stdlib.h>

int main(void){
    int i;
    int *a =malloc(sizeof(int) * 10);
    for (i=0; i<10; i++)
        a[i]= 10-i;

    for (i=0; i<10;i++)
        printf("a[%d] =%d\n", i, a[i]);
    printf("\n");
    printf("a: %p\n", a);
    free(a);
    return 0;
}