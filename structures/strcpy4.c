# include <stdio.h>
# include <string.h>
/* strcpy copy the value from source to the destionation string*/

int main(){
    char word[20]="Hello";
    char word1[20];
    strcpy(word1,word);
    printf("Here is the word: %s", word1);
    return 0;
}