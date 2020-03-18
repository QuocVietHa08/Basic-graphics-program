#include<graphics.h>
using namespace std;
int c=4;
void bresenhamP1(int x1,int y1,int x2,int y2);
void bresenhamP2(int x1,int y1,int x2,int y2);
void bresenhamP3(int x1,int y1,int x2,int y2);
void bresenhamP4(int x1,int y1,int x2,int y2);
int main ()
{
    initwindow(1000,1000);
    setcolor(c);
    bresenhamP1(100,200,250,300);
    bresenhamP2(100,200,350,300);
    bresenhamP3(100,200,100,350);
    bresenhamP4(150,200,300,450);
    getch();
    closegraph();
    return 0;
}
void bresenhamP1(int x1,int y1,int x2,int y2){
        int dx,dy,p,x=x1,y=y1;
        dx=x2-x1;
        dy=y2-y1;
        p=2*dy-dx;
        for(x=x1;x<x2;x++)
        {
            if(p>0)
            {
                y++;
                p=p+2*dy-2*dx;
            }
            else
            {
                p=p+2*dy;
            }
            putpixel(x,y,c);
        }

}
void bresenhamP2(int x1,int y1,int x2,int y2)
{   //truong hop -1<m<0
    if(x1>x2)
    {
        swap(x1,x2);
        swap(y1,y2);
    }
    int dx,dy,p,x,y;
    x=x1;y=y1;
    putpixel(x1,y1,c);
    dx=x2-x1;
    dy=y2-y1;
    p=2*dy+dx;
    for(x=x1;x<x2;x++)
    {
        if(p>0)
        {
            y--;
            p=p+2*dy+2*dx;
        }
        else{
            p=p+2*dy;
        }
        putpixel(x,y,c);
    }
}
void bresenhamP3(int x1,int y1,int x2,int y2)
{
    //truong hom m>1
    int dx,dy,p,x,y;
    putpixel(x1,y1,c);
    x=x1;y=y1;
    if(x1>x2)
    {
        swap(x1,x2);
        swap(y1,y2);
    }
    dx=x2-x1;
    dy=y2-y1;
    p=2*dx-dy;
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
void bresenhamP4(int x1,int y1,int x2,int y2)
{
    int dx,dy,p,x,y;
    if(x1>x2)
    {
        swap(x1,x2);
        swap(y1,y2);
    }
    x=x1;y=y1;
    dx=x2-x1;
    dy=y2-y1;
    p=2*dx+2*dy;
    putpixel(x1,y1,c);
    for(y=y1;y<y2;y++)
    {
        if(p>0)
        {
            x--;
            p=p+2*dx+2*dy;
        }
        else{
            p=p+2*dx;
        }
        putpixel(x,y,c);
    }
}

