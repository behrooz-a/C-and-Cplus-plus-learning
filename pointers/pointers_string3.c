#include <stdio.h>

/* The first print get the first element or character inside of an array
   The second print start at the beginning and continue to the end of the string */
int main(void){

    char *ch= "Happy coding with \0 C";
    
    printf("%s\n", ch);
    printf("%c\n",*(ch+1));

    return 0;
}