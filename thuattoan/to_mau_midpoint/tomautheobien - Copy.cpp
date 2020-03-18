#include<graphics.h>
#include<conio.h>
using namespace std;

void toMauTheoDuongBien(int x,int y,int mauto,int maubien )
{   int x1,x2;
    //to mau phan tren
    do
    {
     x1=x;
     x2=x;
     while(getpixel(x1-1,y)!=maubien)
        x1--;
     while(getpixel(x2+1,y)!=maubien)
        x2++;
     for(int i=x1;i<=x2;i++){
        putpixel(i,y,mauto);
     }
     while(getpixel(x1,y+1)==maubien)
        x1++;
     if(x1<=x2)
     {

        x=x1;
        y=y+1;
     }
    }while(x1<=x2);
    //to mau phan duoi
    do
    {
     x1=x;
     x2=x;
     while(getpixel(x1-1,y)!=maubien)
        x1--;
     while(getpixel(x2+1,y)!=maubien)
        x2++;
     for(int i=x1;i<=x2;i++){
        putpixel(i,y,mauto);
     }
     while(getpixel(x1,y-1)==maubien)
        x1++;
     if(x1<=x2)
     {

        x=x1;
        y=y-1;
     }
    }while(x1<=x2);
}

int main()
{
    initwindow(500,500);
    setcolor(10);
    circle(100,80,50);
    toMauTheoDuongBien(100,80,4,10);
    getch();
    return 0;
}
