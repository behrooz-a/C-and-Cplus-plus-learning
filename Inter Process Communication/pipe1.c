/* pipe() opens a unidirectional data channel and the input for this command will be an array of size 2 since this command returns two descriptors. fd[0] to read (receive that data) from the pipe and fd[1] to write to the pipe (send the data). 
Program has two processes, first the parent sends the data to child process and the child process displays it in the screen.
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
int fd[2],message, PID;
char buffer[50];

pipe(fd); 
PID=fork();

if(PID<0) 
{
printf("fok failed\n");
}
else if (PID>0)
{
printf("Parent sending data to child process\n");
/*close(fd[1]);*/   /*closing the writing end of the pipe*/
write(fd[1],"Here is the message: I love Learning! \n",40);  
}

else 
{
printf("Child process prints the received data\n");
/*close(fd[0]);*/
message=read(fd[0],buffer,50); 

write(1,buffer,message);
}
return 0;
}