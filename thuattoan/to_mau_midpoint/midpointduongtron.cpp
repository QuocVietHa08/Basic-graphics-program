#include<graphics.h>
#include<iostream>
using namespace std;
int color=4;
void put8pixel(int x,int y)
{
    putpixel(x,y,color);
    putpixel(y,x,color);
    putpixel(y,-x,color);
    putpixel(x,-y,color);
    putpixel(-x,-y,color);
    putpixel(-y,-x,color);
    putpixel(-y,x,color);
    putpixel(-x,y,color);
}

void circlemidpoint(int R)
{
    int x,y;
    int p;
    x=0;
    y=R;
    put8pixel(x,y);
    p=1-R;
    while(x<y)
    {

    if(p<0)
        p+=2*x+3;
    else{
        p+=2*(x-y)+5;
        y--;
    }
    x++;
    put8pixel(x,y);
    }
}
int main()
{
    initwindow(600,600);
    setcolor(4);
    circlemidpoint(50);
    getch();
    closegraph();

    return 0;
}
