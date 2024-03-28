# include <stdio.h>

struct point{
    int x1;
    int x2;
    struct point* link; /* self_referential structures*/
};
int main(){
    struct point point1; /* the first node*/
    struct point point2; /* the second node*/

    point1.link=NULL;   /* Initialization of the both nodes*/
    point1.x1=10;
    point1.x2=20;

    point2.link=NULL;
    point2.x1=30;
    point2.x2=40;

    point1.link=&point2;  /* link poit1 and point2*/
    
    /* we can access members of point2 from point1*/
    
    printf("%d", point1.link -> x1);
    printf("\n%d", point1.link-> x2);
    return 0;
}