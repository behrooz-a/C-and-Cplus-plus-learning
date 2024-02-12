# include <stdio.h>
# include <stdlib.h>
/*  using calloc first zero the space  */

void memory_hog(int size);
int main(void){
    int i;
    

    int *a =calloc(10, sizeof(int));
    int *save=a;
    for (i=0; i<10; i++)
        a[i]= 10-i;

    for (i=0; i<10;i++)
        printf("a[%d] =%d\n", i, a[i]);
    printf("\n");
    printf("a: %p\n", a);

    
    free(a);

    printf("a: %p\n", a);
    for (i=0; i<10;i++)
        printf("a[%d]= %d\n", i, a[i]);

    printf("\n");
    printf("save: %p\n", save);
    for (i=0; i<10;i++)
        printf("save[%d]= %d\n", i, save[i]);    
/*   while (1) memory_hog(500000); */
    return 0;
}
/*
void memory_hog(int size){
     int *a=malloc(size);
}     
*/
