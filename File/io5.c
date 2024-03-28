#include <stdio.h>
#include <stdlib.h>

/* C program to write to a Binary file using fwrite() */

struct ThreeNum {
	int N1, N2, N3;
};
int main()
{
	int i;
    int buffer = 0;
	/* The Structure has 3 elements and the declared variable is Number. */
	struct ThreeNum num;
	FILE* stream;

    /* wb: to open the file in writing for binary mode */

	if ((stream = fopen("file.bin", "wb")) == NULL) {
		printf("Error! opening file");
		/* When the pointer file returns NULL the Program exits.*/
		exit(1);
	}
	
	/* otherwise the program returns a pointer to the file.*/
	for (i = 1; i < 5; ++i) {
		num.N1 = i;
		num.N2 = 2 * i;
		num.N3 = 3 * i ;

        /* fwrite has 4 elements: 
        1. the pointer to the block of memory to be written, 
        2. the size of each element to be written (in bytes),
        3. number of elements the datatype
        4. FILE pointer where we want to write the output file. */
        
		buffer = fwrite(&num, sizeof(struct ThreeNum), 1,
					stream);
	}

	/* This part check if the data is written or not */ 
	if (!buffer) {
		printf("The Writing Operation Failed");
	}
	else {
		printf("The Writing Operation was Successful");
	}

	fclose(stream);

	return 0;
}
