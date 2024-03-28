#include <stdio.h>

/* there is no differnce between this code and structarray2 and structarray2. They all are samillar, but they are doing same task but in differnt way */


int main()
{
	struct point {
		int x;
		int y;
		int z;
	} point1[4] = {
		{ 50,  90, 200 },
		{ 50,  60, 100 },
		{ 100, 100, 70 },
		{ 200, 100, 80 }

			
	};
	int i;

	for(i=0;i<4;i++)
	{
		printf("point %d: %d, %d, %d\n",
				i+1,
				point1[i].x,
				point1[i].y,
				point1[i].z
			  );
	}

	return(0);
}
