#include <stdio.h>

struct point{
    int x;
    int y;
    struct point * next;
};

int main(void) {
    
    struct point P1 = {-1, -2, NULL};
    struct point P2 = {2, 3, NULL};
    struct point P3 = {-5, 4, NULL};
    struct point * start, * pt;
    
    start = &P1;
    P1.next = &P2;
    P2.next = &P3;

    pt = start;
    while (pt!=NULL) {
        printf("(%d, %d)\n", pt->x, pt->y);
        pt = pt->next;
    }
    
    
    
	return 0;
}
