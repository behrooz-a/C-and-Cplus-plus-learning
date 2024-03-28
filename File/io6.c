#include <stdio.h>
#include <stdlib.h>

/* C Program to Read from a binary file using fread() to run this code you need a previous file io.5 be executed*/


struct ThreeNum {
	int N1, N2, N3;};

int main()
{
	int i;
	struct ThreeNum number;
	FILE* stream;

	if ((stream = fopen("file.bin", "rb")) == NULL) {
		printf("Error! opening file");

		/* If file pointer will return NULL
		 Program will exit.*/
		exit(1);	}

	/* else it will return a pointer to the file.*/


    /* fread has 4 elements like fwright:
    1- pointer to the memory block for reading
    2- size of each element for reading
    3- the number of elements
    4- stream pointer to the input file
    */

	for (i = 1; i < 5; ++i) {
		fread(&number, sizeof(struct ThreeNum), 1, stream);
		printf("N1: %d\tN2: %d\tN3: %d\n", number.N1, number.N2,
			number.N3);	}

	fclose(stream);

	return 0;
}
