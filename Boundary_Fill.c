//boundary fill algorithm

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void boundary(int x,int y,int fill_color,int boundary_color)
{
    if(getpixel(x,y)!=boundary_color && getpixel(x,y)!=fill_color)
    {
        putpixel(x,y,fill_color);
        boundary(x+1,y,fill_color,boundary_color);
        boundary(x-1,y,fill_color,boundary_color);
        boundary(x,y+1,fill_color,boundary_color);
        boundary(x,y-1,fill_color,boundary_color);
    }
}
void main()
{
    int gd=DETECT,gm,x=125,y=125,fill_color=6,boundary_color=15;
    clrscr();
    initgraph(&gd,&gm"..\\bgi");
    rectangle(100,100,150,150);
    boundary(x,y,fill_color,boundary_color);
    delay(10000);
    closegraph();
    getch();
}
