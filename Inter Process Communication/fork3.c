/* sleep() function in C allows the users to wait for a current thread for a specific time

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main( int argc, char *argv[] ) {
    int pid;
pid = fork();
printf( "... I'm the %s, because the returned pid = %d\n",pid==0?"child":"parent", pid );
sleep( 10 );
return 0;}

