#include<graphics.h>
#include<math.h>
using namespace std;

void khungnhin(int x1,int y1,int x2,int y2)
{   int xv1=x1;
    int yv1=y1,xv2=x2;
    int yv2=y2;
    int tlx=(xv2-xv1)/(xw2-xw1);
    int tly=(yv2-yv1)/(yw2-yw1);

}
void cuaso (float x1,float y1,float x2,float y2)
{
    int xw1=x1;
    int yw1=y1;
    int xw2=x2;
    int yw=y2;
}
void chuyenden(float x,float y)
{
    int xm=(int)(tlx*(x-xw1)+xv1);
    int ym=(int)(tly*(yw2-y)+yv1);
    moveto(xm,ym);
}

void veden(float x,float y)
{

    int xm=(int)(tlx*(x-xw1)+xv1);
    int ym=(int)(tly*(yw2-y)+yv1);
    lineto(xm,ym);
}
int main()
{   int xv1,yx1,xv2,yv2,xw1,yw1,xw2,yw2;
    int gd=0,gm;
    initgraph(&gd,&gm);
    cuaso(-M_PI,-1.5,3*M_PI,1.5);
    khungnhin(150,150,300,250);
    float dx=0.01;
    float x=xw1;
    float y=sin(x);
    chuyenden(x,y);
    while(x<xw2)
    {
        x=x+dx;
        y=sin(x);
        veden(x,y);
    }
    getch();
    closegraph();
    return 0;
}
