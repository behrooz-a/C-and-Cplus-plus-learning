/* The array elements are like ordinary variables and if we do not initialize them then they may have any
value. The compiler just employs whatever values were already present at those memory locations,
that is the reason the outcome can be varies from one pc to other.*/

#include <stdio.h> 
#include <string.h> 
#include<stdlib.h>
#include <conio.h>
  
int main() 
{ 
    int i;
    int array[10];
    /*system("clear");*/
    int n[3]={1,2,3,4};
    for (i=0;i<10;i+=2)
        printf("%3d",i);
    
    puts("");
    printf("%d\n",i);
    printf("%d\n",i++);
    printf("%d\n",++i);
puts("");
    for (i=0;i<10;i++)
        array[i]=0;
 puts("");
    for (i=0;i<10;i++)
        printf("%2d",array[i]);

puts("");
    for (i=0;i<4;i++)
        printf("%2d",n[i]);

    return 0; 
}