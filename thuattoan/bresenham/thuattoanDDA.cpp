#include<graphics.h>
#include<iostream>
#include<math.h>
int c=4;
void thuattoanDDA(int x1,int y1,int x2,int y2)
{

    float m,b;
    m=(float)(y2-y1)/(x2-x1);
    putpixel(x1,y1,c);
      float  y=y1;
    for(int x=x1;x<x2;x++)
    {
        y=y+m;
        putpixel(x,y,c);
    }
}
int main ()
{
    initwindow(1000,1000);
    setcolor(c);
    thuattoanDDA(100,200,200,250);
    getch();
    closegraph();


    return 0;
}
