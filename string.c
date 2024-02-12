#include <stdio.h> 
#include <string.h> 

  
int main() 
{ 
    int length = 0;
    char str[] = "Geeks"; 
    
    
    printf("%s\n", str); 
    length = strlen(str); 
  
    
    printf("Length of string str is %d\n", length); 
    printf("Length of string str is %c\n", str[6]);
    

    
    return 0; 
}