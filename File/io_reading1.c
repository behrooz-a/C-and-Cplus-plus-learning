#include <stdio.h>

/* File handle stream is defined at line 8 */

int main()
{
	char filename[] = "input.txt";
	FILE *stream;

	/* we opened the file to read the file at line 11. If the file handle is null, the open operation fails 
	 return 1 means the program does not execute successfully and there is some error*/

	stream = fopen(filename,"r");
	if( stream == NULL )
	{
		printf("Unable to read from file %s\n",filename);
		return(1);
	}
	
	printf("File '%s' opened\n",filename);

	/* fclose function gets the fh file handle as the argument which tells us the file has been closed */
	fclose(stream);

	return(0);
}
