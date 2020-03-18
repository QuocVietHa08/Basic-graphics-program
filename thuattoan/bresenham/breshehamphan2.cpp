#include <graphics.h>
#include<iostream>
#define DELAY 10
int colorRedBlue = BLUE;
struct point
{
    int x, y;
};
void lineBresenham(int x1, int y1, int x2, int y2){
    int x, y, Dx, Dy, p, c1, c2;
    Dx = abs(x2 - x1);
    Dy = abs(y2 - y1);
    p = 2*Dy - Dx;
    c1 = 2*Dy;
    c2 = 2*(Dy-Dx);
    x = x1;
    y = y1;

    int x_unit = 1, y_unit = 1;

    if (x2 - x1 < 0)
        x_unit = -x_unit;
    if (y2 - y1 < 0)
        y_unit = -y_unit;

    if (x1 == x2)   // duong thang dung
    {
        while (y != y2+1)
        {
            delay(DELAY);
            y += y_unit;
            putpixel(x, y, colorRedBlue);
        }
    }

    else if (y1 == y2)  // duong ngang
    {
        while (x != x2+1)
        {
            delay(DELAY);
            x += x_unit;
            putpixel(x, y, colorRedBlue);
        }
    }
    else{
        putpixel(x, y, colorRedBlue);
        while(x != x2){
            delay(DELAY);
            if (p<0) p += c1;
            else{
                p += c2;
                y += y_unit;
            }
            x += x_unit;
            putpixel(x, y, colorRedBlue);
        }
    }
}

int main(){
    initwindow(600,800);
    int gd,gm=VGAMAX; gd=DETECT;
    initgraph(&gd,&gm,NULL);
    setbkcolor(WHITE);
    int x = 100, y = 200;
    point A[9] = {{getmaxx()/2, getmaxy()/2},
                    {A[0].x-x, A[0].y-y},
                    {A[0].x-x, A[0].y+y},
                    {A[0].x+x, A[0].y+y},
                    {A[0].x+x, A[0].y-y},
                    {A[0].x, A[0].y-y},
                    {A[0].x-x, A[0].y},
                    {A[0].x, A[0].y+y},
                    {A[0].x+x, A[0].y},
                };

    for (int i=1; i<9; i++)
    {
        lineBresenham(A[0].x, A[0].y, A[i].x, A[i].y);
    }

    getchar();
    return 0;
}
