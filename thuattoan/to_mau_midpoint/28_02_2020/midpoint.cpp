#include<graphics.h>
using namespace std;
int c=4;
void put8pixel(int xc,int yc,int x,int y)
{
    putpixel(x+xc,y+yc,c);
     putpixel(-x+xc,y+yc,c);
      putpixel(x+xc,-y+yc,c);
       putpixel(-x+xc,-y+yc,c);
        putpixel(y+xc,x+yc,c);
         putpixel(-y+xc,x+yc,c);
          putpixel(y+xc,-x+yc,c);
           putpixel(-y+xc,-x+yc,c);
}
void midpoint(int xc,int yc,int r)
{
    int x=0;int y=r;
    put8pixel(xc,yc,x,y);
    int f=1 - r;
    while(x < y)
    {
        if(f < 0) f += (x << 1) +1;
        else
        {
            y--;
            f +=(( x - y) << 1 ) + 5;
        }
        x++;
        put8pixel(xc,yc,x,y);
    }

}
int main ()
{
    initwindow(1000,1000);
    setcolor(c);
    midpoint(100,100,50);
    getch();
    closegraph();
    return 0;
}
