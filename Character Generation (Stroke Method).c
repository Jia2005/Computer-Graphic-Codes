//Name in CG by Stroke Method

//Name in CG
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "..//BGI");
    
    //Letter J
    line(300, 250, 360, 250);
    line(330, 250, 330, 300);
    line(330, 300, 310, 300);
    line(310, 300, 310, 290);
    
    //Letter I
    line(395, 250, 445, 250);
    line(420, 250, 420, 300);
    line(395, 300, 445, 300);
    
    //Letter A
    line(490, 250, 530, 250);
    line(490, 250, 490, 300);
    line(530, 250, 530, 300);
    line(490, 275, 530, 275);
    
    delay(1000);
    getch();
    closegraph();
}
