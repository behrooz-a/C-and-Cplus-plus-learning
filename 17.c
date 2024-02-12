# include <stdio.h>
# include <stdlib.h>
int main(void){
    int quiz_score;
    fprintf(stdout, "e");
    fscanf(stdin,"%i",&quiz_score);
    printf("you %d.\n",&quiz_score);
    return EXIT_SUCCESS;
}