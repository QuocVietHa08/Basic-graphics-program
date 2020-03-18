#include<graphics.h>
using namespace std;
int c=4;
void bresenham(int x1,int y1,int x2,int y2)
{
    if(x2<x1)
    {
        swap(x1,x2);
        swap(y1,y2);
    }
    int dx,dy,p,x,y;
    x=x1;
    y=y1;
    dx=x2-x1;
    dy=y2-y1;
    p=2*dx-dy;
    putpixel(x1,y1,c);
    for(y=y1;y<y2;y++)
    {
        if(p>0)
        {
            x++;
            p=p+2*dx-2*dy;
        }
        else{
            p=p+2*dx;
        }
        putpixel(x,y,c);
    }
}
int main ()
{
    initwindow(1000,1000);
    setcolor(c);
    bresenham(100,200,250,400);
    getch();
    closegraph();
    return 0;
}
