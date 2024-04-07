/* In this code when we print two seperate sentence one for parent and the other for the child 
process. fork return 0 as a child process or a positive interger as the parent process 
getpid returns the process ID of the calling process. This is often used by routines 
We can get the process ID by getpid() which always provides the current process ID  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

 
  int main(int argc, char* argv[]){
    int PID= fork();
    printf("My PID is %d\n", getpid());
    
    printf( "Happy coding! This is the %s process with %d Process ID\n", PID== 0 ? "child" : "parent", PID);
      
    return 0;}