# include <stdio.h>
# include <string.h>
/* after defining the string then we can intitilize it by strcpy */
int main(){
    char word[20];
    strcpy(word,"Hello");
    printf("Here is the word: %s", word);
    return 0;
}