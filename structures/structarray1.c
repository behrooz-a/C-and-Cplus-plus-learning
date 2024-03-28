#include <stdio.h>

int main()
{
	struct point {
		int x;
		int y;
		int z;
	};
	struct point point1[4];
	int i;

	point1[0].x = 100;
	point1[0].y = 50;
	point1[0].z = 90;
	point1[1].x = 200;
	point1[1].y = 50;
	point1[1].z = 60;
	point1[2].x = 100;
	point1[2].y = 100;
	point1[2].z = 70;
	point1[3].x = 200;
	point1[3].y = 100;
	point1[3].z = 80;

	for(i=0;i<4;i++)
	{
		printf("point %d: %d, %d, %d \n",
				i+1,
				point1[i].x,
				point1[i].y,
				point1[i].z
			  );
	}

	return(0);
}
