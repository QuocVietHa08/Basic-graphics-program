#include<graphics.h>
#include<iostream>
using namespace std;
int c=4;
void bresenhamP1(int x1,int y1,int x2,int y2);

void bresenhamP2(int x1,int y1,int x2,int y2);
/*void bresenhamP3();
void bresenhamP4();
void bresenhamP5();
void bresenhamP6();
void bresenhamP7();
void bresenhamP8();*/
int main ()
{
    initwindow(1000,1000);
    setcolor(c);
    bresenhamP1(200,400,500,600);
    //bresenhamP2()
    getch();
    closegraph();
    return 0;
}
void bresenhamP1(int x1,int y1,int x2,int y2)
{
    int dx,dy,p;
    int x,y=y1;
    putpixel(x1,y1,c);
    dx=x2-x1;
    dy=y2-y1;
    p=2*dx-dy;
    for(x=x1;x<x2;x++)
    {
        if(p<0)
        {
            p=p+2*dy;
        }
        else{
            p=p+2*(dy-dx);
            y++;
        }
        putpixel(x,y,c);
    }
}

void bresenhamP2(int x1,int y1,int x2,int y2)
{//truong hop-1<m<0
    int dx,dy,p;
    putpixel(x1,y1,c);
    dx=x2-x1;
    dy=y2-y1;
    p=2*dy+dx;
    int y,x;
   for(x=x1;x<x2;x++)
   {
       if(p<0)
       {
           y--;
       }
       else{
        p=p+2*dy+2*dx;
        putpixel(x,y,c);
       }
   }
}

