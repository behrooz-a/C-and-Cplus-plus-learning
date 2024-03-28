#include <stdio.h>

/* In this code we want to store x, y coordinate of a point in a plane with a structure
 for this reason, we define two functions (ReadPoint and PrintPoint) the first one read
 from input and keep in x and y and the second function print the structure components  */


struct point{
    int x;
    int y;
};

void ReadPoint(struct point * ptr);
void PrintPoint(struct point pt);

int main(void) {
    
    struct point z;
    ReadPoint(&z);
    PrintPoint(z);
	return 0;
}

void ReadPoint(struct point * ptr) {
    printf("\nEnter a new point: \n");
    printf("x-coordinate: ");
    /* we have a pointer to a structure and we need to dereference first and then we go to the x member 
    By using the arrow -> or the dereference operator, we reference the structure from the one on the left to the one on the right.
    */
    scanf("%d", &(ptr -> x));
    printf("y-coordinate: ");
    scanf("%d", &ptr->y);
}

void PrintPoint(struct point pt){
    /* pt is the structure itself and by pt.x we get x coordinate of the structure*/
    printf("(%d, %d)\n", pt.x, pt.y);
}