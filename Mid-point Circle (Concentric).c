#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void main() {
    int gm, gd = DETECT;
    int rad, xc, yc, xo, yo, po;

    clrscr();

    printf("Enter the radius of the circle \n");
    scanf("%d", &rad);

    printf("Enter the coordinates of the circle \n");
    scanf("%d%d", &xc, &yc);

    initgraph(&gd, &gm, "..//BGI");

    while (rad != 0) {
        xo = 0;
        yo = rad;

        putpixel(xc + xo, yc + yo, WHITE);
        putpixel(xc + yo, yc + xo, WHITE);
        putpixel(xc + yo, yc - xo, WHITE);
        putpixel(xc + xo, yc - yo, WHITE);
        putpixel(xc - xo, yc - yo, WHITE);
        putpixel(xc - yo, yc - xo, WHITE);
        putpixel(xc - yo, yc + xo, WHITE);
        putpixel(xc - xo, yc + yo, WHITE);

        po = (5 / 4) - rad;

        while (xo < yo) {
            putpixel(xc + xo, yc + yo, WHITE);
            putpixel(xc + yo, yc + xo, WHITE);
            putpixel(xc + yo, yc - xo, WHITE);
            putpixel(xc + xo, yc - yo, WHITE);
            putpixel(xc - xo, yc - yo, WHITE);
            putpixel(xc - yo, yc - xo, WHITE);
            putpixel(xc - yo, yc + xo, WHITE);
            putpixel(xc - xo, yc + yo, WHITE);

            if (po < 0) {
                po = po + (2 * xo) + 1;
                xo = xo + 1;
            } else {
                po = po + (2 * xo) - (2 * yo) + 1;
                yo = yo - 1;
                xo = xo + 1;
            }
        }

        rad = rad - 5;
    }

    getch();
    closegraph();
}
