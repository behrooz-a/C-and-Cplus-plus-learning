#include<stdio.h>

int gcd (int A, int B)
{
int temp;
while ((B % A) != 0) {
temp = B % A;
B = A;
A = temp;
}
return (A);
}