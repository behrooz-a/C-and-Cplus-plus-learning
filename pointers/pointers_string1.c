#include <stdio.h>
/* we can print the whole string- every single individual character in the string is a character */

int main(void){
    char array[]= "Happy coding with C";
    printf("%s\n",array);
    printf("%c",array[0]);
    return 0;
}