/* by employing fork, it creates a child process. The child process is a copy ofthe 
original (parent) process This is the primary method of process creation in Unix 
operating system. In this program, printf will be run two times one by parent and
the other by child process. If the number of times we use fork is n then printf will
run n ^2  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

 
  int main(int argc, char* argv[]){
    fork();
    printf("Happy coding with C\n");
    return 0;
  }      

