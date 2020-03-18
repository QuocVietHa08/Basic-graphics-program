#include<graphics.h>
using namespace std;
int c=4;
void bresenham(int x1,int y1,int x2,int y2)
{

    if(x1>x2)
    {

        swap(x1,x2);
        swap(y1,y2);
    }
    int dx,dy,p,x,y;
    x=x1;y=y2;
    dx=x2-x1;
    dy=y2-y1;
    p=2*dy+2*dx;
    putpixel(x1,y1,c);
    for(x=x1;x<x2;x++)
    {
        if(p>0)
        {
            p=p+2*dy+2*dx;
            y--;
        }
        else{
            p=p+2*dy;
        }
        putpixel(x,y,c);
    }
}
int main ()
{
    initwindow(1000,1000);
    setcolor(c);
    bresenham(100,200,300,200);
    getch();
    closegraph();
    return 0;
}
