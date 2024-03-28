#include <stdio.h>

int main()
{
	char filename[] = "input.txt";
	FILE *stream;
	int input;

	/* we open the file and read then content of the file */
	stream = fopen(filename,"r");
	if( stream == NULL )
	{
		printf("Unable to read from file %s\n",filename);
		return(1);
	}
	
	/* this part of the code reads the file one character at a time fgetc gets a single character from a file and keeps it in integer variable ch
	if ch is EOF then we leave the loop otherwise we will go to an endless loop and insert the character at the ouput */
	while(1)
	{
		input = fgetc(stream);
		if( input == EOF )
			break;
		putchar(input);
	}

	/* this closes once the reading has been done */
	fclose(stream);

	return(0);
}
