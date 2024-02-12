/* without declaring a function*/
# include <stdio.h>

int main()
{
    puts("Carefully read these directions!");
    printf("Press Enter to ontinue: ");
    getchar();
    puts("Are you sure you read the directions?");
    printf("Press Enter to continue: ");
    getchar();
    puts("Okay. I'm sure you're sure.");
    printf("Press Enter to continue: ");
    getchar();
    return(0);
}