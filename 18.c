# include <stdio.h>
/* a function adds one to a value  */
void addOne(int*);
int main(void){
    int a =0;
    addOne(&a);
    printf("%d",a);
    return 0;
}
void addOne(int* a){
    *a= *a+1;

}