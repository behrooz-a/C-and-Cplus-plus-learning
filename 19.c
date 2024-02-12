# include <stdio.h>
/* return pointers from a function  */
int* addOne(int*); /*return a value*/
int main(void){
    int i =0;
    int*a = &i;
    a= addOne(a);
    printf("%d",*a);
    return 0;
}
int* addOne(int* a){
    *a= *a+1;
      return a; /*return back a pointer*/

}