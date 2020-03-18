#include<graphics.h>
#include<iostream>
using namespace std;
void toMauTheoDuongBien(int x,int y,int mauto,int maubien)
{
    int x1,x2;
    do
    {
        x1=x;
        x2=x;
        while(getpixel(x1-1,y)!= maubien) x1--;
        while(getpixel(x2+1,y)!=maubien)  x2++;
            //line
            for(int i=x1;i<=x2;i++)
        {
            putpixel(i,y,mauto);
        }
        while(getpixel(x1,y+1) == maubien) x1++;
        if(x1<=x2)
        {
            x=x1;
            y=y+1;
        }
    }
    while(x1<=x2);

     do
    {
        x1=x;
        x2=x;
        while(getpixel(x1-1,y)!= maubien) x1--;
        while(getpixel(x2+1,y)!=maubien)  x2++;
            //line
            for(int i=x1;i<=x2;i++)
        {
            putpixel(i,y,mauto);
        }
        while(getpixel(x1,y-1) == maubien) x1++;
        if(x1<=x2)
        {
            x=x1;
            y=y-1;
        }
    }
    while(x1<=x2);
}

int main()
{
    initwindow(1000,1000);
    setcolor(5);
    rectangle(100,100,400,400);
    toMauTheoDuongBien(200,200,4,5);
    getch();
    closegraph();
    return 0;
}
