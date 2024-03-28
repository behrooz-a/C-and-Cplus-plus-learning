#include <stdio.h>
#include <stdlib.h>


/*  To write to a text file, we employ fprintf and fscanf
fprintf is the same as printf except it needs a file pointer as the first argument. The same for fscanf which reads values from the file pointed and assigned values*/


int main()
{
   int number;
   FILE *stream;
   
   stream = fopen("data.txt","w");

   if(stream == NULL)
   {
      printf("Error in writing the file!");   
      exit(1);             
   }

   printf("Enter numbers: ");
   scanf("%d",&number);

   fprintf(stream,"%d",number);
   fclose(stream);

   return 0;
}