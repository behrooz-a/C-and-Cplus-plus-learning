/* If we want to manage the program from outside rather than hard coding the values inside the program, we may use the command line arguments in the command line shell of operating system.
The main function handles the command line arguments which are two components the first one is the number of command line (argc) and the second one is the list of command line (argv).
argc: it stands for argument count, and it is an integer variable which keeps the number of arguments has been passed to the program containing the program name. In the case, we pass just a value, argc will be 2 (an argument plus the program name). This should be non-negative.
char argv: it stands for the argument vector, and it is an array of character that points to each argument passed to the program. When argc is larger than zero, argv[0] to argv[argc-1] contains pointers to strings. 
Argv[0]: contains the name of the program
From Argv[1] to argv[argc-1] are the command line arguments */


# include <stdio.h>

int main(int argc , char *argv[]){
    int k;
    printf("The number of arguments is : %d\n",argc);
    for (k=0;k<=argc;k++) {
    printf("The argument number %d is =%s\n", k,argv[k]);}

    return 0;
}