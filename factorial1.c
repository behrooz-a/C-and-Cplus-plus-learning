# include <stdio.h>
int factorial (int m)
{
int i, temp=1;
for (i=1; i<=m; i++)
temp = temp * i;
return (temp);
}

int main(){
   printf("%d",factorial(5));
   return 0;
}
