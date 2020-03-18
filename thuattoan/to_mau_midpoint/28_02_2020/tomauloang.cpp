#include<graphics.h>
using namespace std;
int d=4;
void FloodFill4(int x,int y,int nc,int bc)
{
    int c=getpixel(x,y);
    if(getpixel(x,y) != nc && getpixel(x,y)!= bc)
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
    setcolor(d);
    rectangle(100,100,200,200);
    FloodFill4(150,150,4,5);
    getch();
    closegraph();
    return 0;
}
