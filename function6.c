#include <stdio.h>

float average(float a, float b, float c)
{
	float avg;

	avg = ( a + b + c ) / 3;

	return(avg);
}

int main()
{
	float a,b,c;
    printf("please enter 3 numbers: ");
    scanf("%f%f%f", &a, &b,&c);
	a = average( a, b, c );
	printf("The average of input is %.2f\n",a);

	return(0);
}
