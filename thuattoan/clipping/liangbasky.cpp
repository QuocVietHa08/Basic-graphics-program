#include<graphics.h>
using namespace std;

void liangbasky(int xa,int ya,int xb,int yb,int x1,int y1,int x2,int y2)
{
    int dx,dy,p1,p2,p3,p4,q1,q2,q3,q4;
    int t1,t2;
    dx=xb-xa;
    dy=yb-ya;
    p1=-dx;
    q1=xa-x1;
    p2=dx;
    q2=-xa+x2;
    p3=-dy;
    q3=ya-y1;
    p4=dy;
    q4=ya+y2;
    t1=0;
}
int main()
{
    initwindow(800,800);

    return 0;
}
