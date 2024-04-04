/* We want to write a code which takes to input in the command line and then print the summation result
atoi is the abbreviation for ASCII To Integer which takes the string and return an integer we need <stdlib.h> header file for this command*/

# include <stdio.h>
# include <stdlib.h>

int main(int argc , char *argv[]){
    int k, total=0;
    for (k=1;k<argc;k++) {
         total=total+atoi(argv[k]);}
    printf("The sum of %d numbers entered as arguments is =%d\n", argc-1,total);

    return 0;
}