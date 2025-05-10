#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
    int gd = DETECT, gm, x1, y1, x2, y2, len,k,dx,dy;
    float x,y,xinc,yinc;
    initgraph(&gd,&gm, "..//bgi");
    
    printf("enter the co ordiinates of first point: ");
    scanf("%d%d",&x1,&y1);
    
    printf("Entr the co-ordinates of the seond point: ");
    scanf("%d%d",&x2,&y2);
    
    dx = abs(x2-x1);
    dy = abs(y2-y1);
    
    len = (dx >= dy) ? dx : dy;
    
    xinc = (float)dx/len;
    yinc = (float)dy/len;
    x = x1;
    y = y1;
    for(k=1; k<=len; k++)
    {
         putpixel(x,y, WHITE);
         x += xinc;
         y += yinc;
    }
     getch();
     closegraph();
}
