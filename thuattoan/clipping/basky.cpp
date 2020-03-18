#include<graphics.h>

void clipping_Liang_Basky(int xw1,int yw1,int xw2,int yw2,int xa,int ya,int xb,int yb)
{
    int dx=xb-xa;
    int dy=yb-ya;
    int p[4],q[4];
    p[0]=-dx;   p[1]=dx;
    p[2]=-dy;   p[3]=dy;

    q[0]=xa-xw1;    q[1]=-xa+xw2;
    q[2]=ya-yw1;    q[3]=-ya+yw2;

    float t1=1,t2=0;
    float tam;
    for(int i=0;i<4;i++)
    {
        tam=(float) q[i]/p[i];
        if(p[i]>0)
            if(t1>tam) t1=tam;
        if(p[i]<0)
            if(t2<tam) t2=tam;
    }
    if(t1>=t2)
    {
        int xa1=(int)(xa +t1*dx +0.5);
        int ya1=(int)(ya +t1*dy+0.5);
        int xb1=(int) (xa +t2*dx +0.5);
        int yb1=(int) (ya +t2*dy +0.5);
        line(xa1,ya1,xb1,yb1);
    }
}
int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    rectangle(100,100,300,250);
    line(100,50,400,300);
    getch();
    setcolor(2);

    clipping_Liang_Basky(100,100,300,250,100,50,400,300);
    getch();
    closegraph();
    return 0;
}
