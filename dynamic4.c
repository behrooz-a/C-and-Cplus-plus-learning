/* The code reads the characters from keyboard till it finds a new line charecter (or use enter at the end)and then the input will be printed */

# include <stdio.h>
# include <stdlib.h>

char *str;

void main(){
    str=malloc(1000);
    scanf("%[^\n]s",str);
    printf("\n%s\n",str);
    free(str);
    
}