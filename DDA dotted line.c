// DDA dotted

#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
    int gd = DETECT, gm, x1, y1, x2, y2, len, k, dx, dy;
    float x, y, xinc, yinc;
    
    initgraph(&gd, &gm, "..//bgi");
    
    printf("Enter the co-ordinates of the first point: \n");
    scanf("%d%d", &x1, &y1);
    
    printf("Enter the co-ordinates of the second point: \n");
    scanf("%d%d", &x2, &y2);
    
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    len = (dx >= dy) ? dx : dy;
    
    xinc = (float)dx / len;
    yinc = (float)dy / len;
    
    x = x1;
    y = y1;
    
    for(k = 0; k < len; k++)
    {
        if(k % 2 == 0) {
            putpixel(x, y, WHITE);
        }
        else {
            putpixel(x, y, BLACK);
        }
        
        x += xinc;
        y += yinc;
    }
    
    getch();
    closegraph();
}
