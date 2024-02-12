/* without declaring a function*/
# include <stdio.h>

void pressAny(void)
{
    printf("Press Enter to continue: ");
    getchar();
}
int main()
{
    puts("Carefully read these directions!");
    pressAny();
    puts("Are you sure you read the directions?");
    pressAny();
    puts("Okay. I'm sure you're sure.");
    pressAny();

    return(0);
}