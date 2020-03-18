#include<graphics.h>
#include<math.h>
using namespace std;
float xwmax , xwmin , ywmax , ywmin;
float tlx , tly;
int xvmax , xvmin , yvmax , yvmin;
void cuaso(float x1 , float y1 , float x2 , float y2){
    xwmax = x2;
    xwmin = x1;
    ywmax = y2;
    ywmin = y1;
}
void khunghinh(int x1 , int y1 , int x2 , int y2){
    int xvmax = x2;
    int xvmin = x1;
    int yvmax = y2;
    int yvmin = y1;
    tlx = (xvmax-xvmin)/(xwmax-xwmin);
    tly = (yvmax-yvmin)/(ywmax-ywmin);
}
void chuyenden2D(float x , float y){
    int xm =(int)(tlx*(x-xwmin)+xvmin+0.5);
    int ym =(int)(tly*(ywmax-y)+yvmin+0.5);
    moveto(xm,ym);
}
void veden2D(float x , float y){
    int xm = (int)(tlx*(x-xwmin)+xvmin+0.5);
    int ym = (int)(tly*(ywmax-y)+yvmin+0.5);
    lineto(xm,ym);
}
void tinhtien(float x,float y,float &x1,float &y1,int m,int n){
    x1=x+m;
    y1=y+n;
}

void quay(float x,float y,float &x1,float &y1,float alp){
    x1=x*cos(alp)-y*sin(alp);
    y1=x*sin(alp)+y*cos(alp);
}
void vedothi(float xmin,float xmax){
    float dx = 0.01;
    float x = xmin ;
    float y = (x*x) + 1;
    while(x<=xmax){
        x = x+dx;
        y = x*x+1;
        veden2D(x,y);
    }
}
void veanhdothi(float xmin , float xmax){
    float dx = 0.01;
    float x = xmin ;
    float y = (x*x) + 1;
    float x1,y1,x2,y2,x3,y3;
    tinhtien(x,y,x1,y1,0,-1);
    quay(x,y,x2,y2,M_PI/2);
    tinhtien(x,y,x3,y3,0,1);
    chuyenden2D(x3,y3);
    while(x<=xmax){
        x = x+dx;
        y = x*x+1;
        tinhtien(x,y,x1,y1,0,-1);
        quay(x,y,x2,y2,M_PI/2);
        tinhtien(x,y,x3,y3,0,1);
        veden2D(x3,y3);
}
}
int main(){
    initwindow(640,480);
    cuaso(-2,-1.5,3,1.5);
    khunghinh(150,150,300,250);
    setcolor(14);
    vedothi(-2,2);
    veanhdothi(-2,2);
    getch();
    closegraph();
    return 0;
}

