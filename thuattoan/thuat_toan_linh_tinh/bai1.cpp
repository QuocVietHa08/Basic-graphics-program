#include<graphics.h>
#include<iostream>
using namespace std;
void linebres(int x1,int y1,int x2,int y2)
{
    int dx,dy,const1,const2,p;
    int x,y;
    dx=x2-x1;
    dy=y2-y1;
    p=2*dy-dx; //tham so quyet dinh cho viec chon diem tiep theo dua vao dau cua no
    const1=2*dy;
    const2=2*dy-2*dx;
    x=x1;
    y=y1;
    putpixel(x,y,4);
    for(int i=x1;i<x2;i++)
    {
        if(p<0)
            p+=const1;
        else{
            p+=const2;
            y++;
        }
        x++;
        putpixel(x,y,4);
        delay(10);
    }
}

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    initwindow(600,800);
    linebres(x1,y1,x2,y2);
    getch();
    closegraph();
    return 0;
}
