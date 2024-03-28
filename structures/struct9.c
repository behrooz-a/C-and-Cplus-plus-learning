# include <stdio.h>


struct Point{
    int X;
    int Y;
};

int main(){
    struct Point a={0};

    struct Point b=a;
    struct Point *c= &a;
    (*c).X= 1.0;
    printf("%d %d %d", a.X, b.X, (*c).X);
    return 0;
}