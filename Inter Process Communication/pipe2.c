
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(int argc, char* argv[]){
    int fd[2],id;
    char i[100],o[100];
    if (pipe(fd) == -1){
        printf("Error happened during opening the pipe\n");
        return 1;
    }
    id =fork();
    if (id ==0){    
        
        printf("Enter a sentence: ");
        
        fgets(i,sizeof(i), stdin);
        sleep(4);
        write (fd[1], i, sizeof(i));
        close(fd[1]);
    }
    else{
        
        read(fd[0], o, sizeof(o));
        close(fd[0]);
        printf("Received the message from the child process as %s\n", o);

    }
    return 0;
}




