# include <stdio.h>
 /* to calculate the size of the operand.*/
 /* https://www.youtube.com/watch?v=Vh4krbTnTAA */

int main(){
    int numbers[2][3]={
        {1,2,3},
        {4,5,6}
    };
    int i,j, rows, columns;
    rows= sizeof(numbers)/sizeof(numbers[0]);
    columns=sizeof(numbers[0])/sizeof(numbers[0][0]);

    for ( i=0;i<rows;i++){
        for ( j=0;j<columns;j++)
        printf("%d ",numbers[i][j]);
        printf("\n");
    }
    printf("%lu\n", numbers[0]);
    printf("%d\n", sizeof(numbers[0]));
    printf ("%d\n", sizeof(numbers)/sizeof(numbers[0]));
    printf("%d %d\n", rows, columns);
    /*printf ("%d\n", numbers[0].length);*/
    
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(float));
    printf("%lu", sizeof(double));
    
    return 0;
}