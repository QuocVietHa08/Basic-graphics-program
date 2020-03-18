#include<graphics.h>
#include<iostream>
using namespace std;
void tomauloang(int x,int y,int mb,int mt)
{
    int mau;
    mau=getpixel(x,y);
    if(mau !=mb && mau!=mt)
    {
       // delay(2);
        putpixel(x,y,mt);
        tomauloang(x-1,y,mt,mb);
        tomauloang(x,y+1,mt,mb);
        tomauloang(x+1,y,mt,mb);
        tomauloang(x,y-1,mt,mb);
    }
}
int main()
{
    initwindow(800,800);
    rectangle(50,20,400,400);
    circle(350,350,50);
    tomauloang(300,399,10,15);
    getch;
    return 0;
}
