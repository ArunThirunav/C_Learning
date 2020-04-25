#include<stdio.h>
#include<math.h>

int areaRectangle(rect);

struct point
{
    int x,y;
};

typedef struct
{
    struct point tl, br;   
}rect;


void main(){

    rect rect1;
    struct point pt1;
    pt1.x = 1;
    pt1.y = 2;
    
    struct point pt2;
    pt2.x = 4;
    pt2.y = 5;

    rect1.tl = pt1;
    rect1.br = pt2;
    // printf("the x is :%d \n the y is: %d\n", rect1.br.x, rect1.br.y);
    printf("the area is : %d \r\n", areaRectangle(rect1));
    // areaRectangle(rect1);
}

int areaRectangle(rect rectw){
    int breadth, length, area;
    
    breadth = rectw.br.x - rectw.tl.x;
    length = rectw.br.y - rectw.tl.y;

    printf("the breadth val is : %d \n", breadth);
    printf("the length is: %d \n", length);

    area = length * breadth;
    // printf("the area is %d \r\n", area);
    return area;
}