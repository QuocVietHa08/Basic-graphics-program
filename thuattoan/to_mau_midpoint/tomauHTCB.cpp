#include<graphics.h>
void tomauHTCB(int xa,int xb,int xc,int xd,int yamin,int ydmax,int mt)
{

    int xm1,xm2;
    float m1=(float)(ydmax-yamin)/(xd-xa);
    float m2=(float)(ydmax-yamin)/(xc-xb);
    int color=getcolor();
    setcolor(mt);
    for(int y=yamin;y<=ydmax;y++)
    {
        xm1=(int)((1/m1)*(y-yamin)+xa+0.5);
        xm2=(int)((1/m2)*(y-yamin)+xb+0.5);
        line(xm1,y,xm2,y);
        delay(50);
    }
    setcolor(color);
}
int main()
{
    initwindow(640,700);
    tomauHTCB(200,350,550,130,100,300,5);
    getch();
    closegraph();
    return 0;
}
