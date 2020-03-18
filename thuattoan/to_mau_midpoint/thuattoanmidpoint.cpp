#include<graphics.h>
#include<math.h>
using namespace std;
int c=4;
void put8pixel(int xc,int yc,int x,int y,int c)
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
void Midpoint(int xc,int yc,int r,int c)
{

    int x=0;int y=r;
    int f=1-r;
    put8pixel(xc,yc,x,y,c);
    while (x < y)
    {
        if (f < 0) f += (x << 1) + 3;
        else
        {
            y--;
            f += ((x - y) << 1) + 5;
        }
        x++;
        put8pixel(xc, yc, x, y, c);
    }
}

int main ()
{
    initwindow(1000,1000);
    Midpoint(200, 200, 100,c);

    getch();
    closegraph();

    return 0;
}
