#include <stdio.h>

/* The difference between reading a single character (previous code and this one) or a series of text is insignificant because the operating system buffers the file access*/

int main()
{
	char filename[] = "input.txt";
	FILE *stream;
	char buffer[128];

	/* open the file */
	stream = fopen(filename,"r");
	if( stream == NULL )
	{
		printf("Unable to read from file %s\n",filename);
		return(1);
	}
	
	/* In this section, we read the file 128 bytes at a time with fgets the infromation will be stored in an array buffer
	when there is no text, fgets function returns null. The while loop read from the file via the buffer output */
	while( fgets(buffer,128,stream) )
		printf("%s",buffer);

	/* close when you're done */
	fclose(stream);

	return(0);
}
