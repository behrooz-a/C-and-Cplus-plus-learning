# include <stdio.h>

int factorial (int n);
int main()
{
int n=5;
for (n=1; n<=10; n++)
    printf ("%d! = %d \n",n, factorial (n) );
return 0;
}