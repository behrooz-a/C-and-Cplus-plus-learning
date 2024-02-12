# include <stdio.h>
# include <stdlib.h>
// It allocate it but not free it
// Heap is growing, but never free it
// run the activity monitor on Mac

void memory_hog(int size);
int main(void){
    
   while (1) memory_hog(500000);
    return 0;
}

void memory_hog(int size){
     int *a=malloc(size);
}