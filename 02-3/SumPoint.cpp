#include <iostream>

typedef struct __Point
{
    int xpos;
    int ypos;
}Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
    // save Point in heap
    Point *returnPoint = new Point;
    returnPoint->xpos = p1.xpos + p2.xpos;
    returnPoint->ypos = p1.ypos + p2.ypos;

    return *returnPoint;
}

int main(void)
{
    Point *p1 = new Point;
    p1->xpos = 1;
    p1->ypos = 1;

    Point *p2 = new Point;
    p2->xpos = 2;
    p2->ypos = 2;

    Point& sumPoint = PntAdder(*p1, *p2); // value of reference
    std::cout<<sumPoint.xpos<<","<<sumPoint.ypos<<std::endl;

    return 0;
}