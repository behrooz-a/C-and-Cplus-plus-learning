# include <stdio.h>
/* This code copy the string without using strcpy*/
int main(){
    char word1[]="Happy coding with C";
    char word2 [30];
    int i=0;
    while (word1[i] != '\0'){
        word2[i]=word1[i];
        i++;
    }
    printf("The first string is: %s\n",word1);
    printf("The second string is: %s\n",word2);
    return 0;
    } 