#include<graphics.h>
#include<math.h>

float xwmin,ywmin,xwmax,ywmax;
float tlx,tly;
float xvmin,xvmax,yvmin,yvmax;
//khoi tao cua so
void cuaso(float x1,float y1,float x2,float y2)
{

    xwmin=x1;
    ywmin=y1;
    xwmax=x2;
    ywmax=y2;
}
//khoi tao khung hinh
void khungnhin(int x1,int y1,int x2,int y2)
{

    xvmin=x1;
    yvmin=y1;
    xvmax=x2;
    yvmax=y2;
    tlx=(xvmax-xvmin)/(xwmax-xwmin);
    tly=(yvmax-yvmin)/(ywmax-ywmin);
}
void chuyenden2D(float x,float y)
{
    int xm=(int)(tlx*(x-xwmin)+xvmin + 0.5);
    int ym=(int)(tly*(ywmax-y)+yvmin + 0.5);
    moveto(xm,ym);
}
void veden2D(float x,float y)
{
    int xm=(int)(tlx*(x-xwmin)+xvmin + 0.5);
    int ym=(int)(tly*(ywmax-y)+ywmin + 0.5);
    lineto(xm,ym);
}
void vedothi(float xmin,float xmax)
{
    float dx=0.01;
    float x=xmin;
    float y=sin(x);
    chuyenden2D(x,y);
    while(x<=xmax)
    {
        x=x+dx;
        y=sin(x);
        veden2D(x,y);
    }
}

int main ()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    cuaso(-3*M_PI,-1.5,4*M_PI,1.5);
    khungnhin(50,50,450,400);
    setcolor(4);
    vedothi(-2*M_PI,3*M_PI);
    getch();
    closegraph();
    return 0;
}
