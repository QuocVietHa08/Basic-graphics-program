#include<graphics.h>
#include<math.h>
float xwmin,ywmin,xwmax,ywmax;
float tlx,tly;
int xvmin,yvmin,xvmax,yvmax;

void cuaso(float x1,float y1,float x2,float y2){
    xwmin=x1;
    ywmin=y1;
    xwmax=x2;
    ywmax=y2;
}
void khungnhin(int x1, int y1, int x2, int y2){
    xvmin=x1;
    yvmin=y1;
    xvmax=x2;
    yvmax=y2;
    tlx=(xvmax-xvmin)/(xwmax-xwmin);
    tly=(yvmax-yvmin)/(ywmax-ywmin);
}
void chuyenden2D(float x, float y){
    int xm=(int)(tlx*(x-xwmin)+xvmin+0.5);
    int ym= (int)(tly*(ywmax-y)+yvmin+0.5);
    moveto(xm,ym);
}
void veden2D(float x,float y){
    int xm=(int)(tlx*(x-xwmin)+xvmin+0.5);
    int ym= (int)(tly*(ywmax-y)+yvmin+0.5);
    lineto(xm,ym);
}
void vedothi(float xmin, float xmax){
    float dx=0.01;
    float x=xmin;
    float y=tan(x)-2;
    chuyenden2D(x,y);
    while(x<=xmax){

        x+=dx;
        y=tan(x)-2;
        veden2D(x,y);
    }
}
void tinhtien(float x,float y,float &x1,float &y1,int m,int n){
    x1=x+m;
    y1=y+n;
}
void doixungtamO(float x,float y,float &x1,float &y1){
    x1=-x;
    y1=-y;
}
void veanhdothi(float xmin, float xmax){
    float dx=0.01;
    float x=xmin;
    float y=tan(x)-2;
    float x1,y1,x2,y2,x3,y3;
    tinhtien(x,y,x1,y1,0,2);
    doixungtamO(x1,y1,x2,y2);
    tinhtien(x2,y2,x3,y3,0,-2);
    chuyenden2D(x3,y3);
    while(x<=xmax){

        x+=dx;
        y=tan(x)-2;
        tinhtien(x,y,x1,y1,0,2);
        doixungtamO(x1,y1,x2,y2);
        tinhtien(x2,y2,x3,y3,0,-2);
        veden2D(x3,y3);
    }
}
int main(){
    initwindow(640,480);
    cuaso(-M_PI/4,-5,M_PI/4,5);
    khungnhin(50,50,450,400);
    setcolor(8);
    vedothi(-M_PI/4,M_PI/4);
    veanhdothi(-M_PI/4,M_PI/4);
    getch();
    closegraph();
}
