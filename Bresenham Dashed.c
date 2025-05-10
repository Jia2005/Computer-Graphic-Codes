#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
    int gd = DETECT, gm, x1, y1, x2, y2, len, i, dx, dy, k = 0;
    int x, y, xinc, yinc, p, temp, s1, s2;
    
    initgraph(&gd, &gm, "..//bgi");
    
    printf("Enter the co-ordinates of the first point: ");
    scanf("%d%d", &x1, &y1);
    
    printf("Enter the co-ordinates of the second point: ");
    scanf("%d%d", &x2, &y2);
    
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    len = abs(dx) >= abs(dy) ? abs(dx) : abs(dy);
    p = 2 * dy - dx;
    x = x1;
    y = y1;
    
    if(dy >= dx) {
        temp = dx;
        dx = dy;
        dy = temp;
        k = 1;
    }
    
    s1 = (x2 - x1) > 0 ? 1 : -1;
    s2 = (y2 - y1) > 0 ? 1 : -1;
    
    for(i = 0; i < len; i++) {
        if(i % 2 == 0) {
            if(p >= 0) {
                putpixel(x, y, WHITE);
                x += s1;
                y += s2;
                p += 2 * dy - 2 * dx;
            } else {
                if(k == 1) {
                    putpixel(x, y, WHITE);
                    y += s2;
                    p += 2 * dy;
                } else {
                    putpixel(x, y, WHITE);
                    x += s1;
                    p += 2 * dy;
                }
            }
        }
        
        if(i % 5 == 0) {
            if(p >= 0) {
                putpixel(x, y, BLACK);
                x += s1;
                y += s2;
                p += 2 * dy - 2 * dx;
            } else {
                if(k == 1) {
                    putpixel(x, y, BLACK);
                    y += s2;
                    p += 2 * dy;
                } else {
                    putpixel(x, y, BLACK);
                    x += s1;
                    p += 2 * dy;
                }
            }
        }
    }
    
    getch();
    closegraph();
}
