//Flood fill

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void flood(int x,int y,int fill_color,int interior_color)
{
    if(getpixel(x,y)==interior_color)
    {
        putpixel(x,y,fill_color);

        flood(x+1,y,fill_color,interior_color);
        flood(x-1,y,fill_color,interior_color);
        flood(x,y+1,fill_color,interior_color);
        flood(x,y-1,fill_color,interior_color);
    }
}

void main()
{
    int gd=DETECT,gm,x=125,y=125,fill_color=5,interior_color=0;
    clrscr();

    initgraph(&gd,&gm,"..\\bgi");

    rectangle(100,100,150,150);
    flood(x,y,fill_color,interior_color);

    delay(10000);
    closegraph();
    getch();
}
