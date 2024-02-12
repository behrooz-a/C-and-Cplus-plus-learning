# include <stdio.h>

int main(){
    float temps[4]={74.9,73.2,78.2,23.9};
    int x;
    printf("local temperature:\n");
    for (x=0;x<4;x++)
      printf("%.2f \n",temps[x]);
    return 0;
}