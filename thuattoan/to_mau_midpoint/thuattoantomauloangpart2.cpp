#include<graphics.h>
#include<iostream>
using namespace std;
void FloodFill4(int x,int y,int nc,int bc)
{
    int c=getpixel(x,y);
    if(getpixel(x,y)!=nc && getpixel(x,y)!=bc)
    {
        putpixel(x,y,nc);
        FloodFill4(x-1,y,nc,bc);
         FloodFill4(x+1,y,nc,bc);
          FloodFill4(x,y-1,nc,bc);
           FloodFill4(x,y+1,nc,bc);
    }
}

int main ()
{
    initwindow(1000,1000);
    rectangle(50,250,150,350);
    FloodFill4(100,300,10,15);
    getch();
    closegraph();

    return 0;
}
