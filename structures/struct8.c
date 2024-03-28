# include <stdio.h>


struct Point{
    int X;
    int Y;
};
void PrintPoint(struct Point *ptr);

int main(){

    /*struct Point t;*/

    struct Point t={0,9};
    t.X=1;
    t.Y=2;
    PrintPoint(&t);

    return 0;
}

void PrintPoint(struct Point *ptr){
    printf("(%d, %d)\n", (*ptr).X, (*ptr).Y);
    printf("(%d, %d) \n", ptr -> X, ptr -> Y);
}