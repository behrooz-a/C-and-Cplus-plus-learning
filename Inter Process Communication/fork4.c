#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main( int argc, char *argv[] ) {
    int i;
for (i = 0; i < 3; i++) {
int pid = fork();
printf( "this is %s, because I received pid = %d\n", pid == 0 ? "child" : "parent", pid);
}
return 0;
}
