// Name in CG – 2
#include <graphics.h>
#include <conio.h>
#include <dos.h>

void main() {
    int i, j, k, x, y;
    int gd = DETECT, gm;
    
    // J
    int ch1[][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
        {1, 1, 0, 0, 1, 1, 1, 0, 0, 0},
        {1, 1, 0, 0, 1, 1, 1, 0, 0, 0},
        {1, 1, 1, 1, 1, 1, 1, 0, 0, 0},
        {1, 1, 1, 1, 1, 1, 0, 0, 0, 0}
    };
    
    // I
    int ch2[][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };
    
    // A
    int ch3[][10] = {
        {0, 0, 0, 1, 1, 1, 1, 0, 0, 0},
        {0, 0, 1, 1, 1, 1, 1, 1, 0, 0},
        {1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
        {1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
        {1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
        {1, 1, 0, 0, 0, 0, 0, 0, 1, 1},
        {1, 1, 0, 0, 0, 0, 0, 0, 1, 1}
    };
    
    initgraph(&gd, &gm, "..\\BGI");
    setbkcolor(LIGHTGRAY);  // set color of background to gray
    
    for(k = 0; k < 7; k++) {
        for(i = 0; i < 10; i++) {
            for(j = 0; j < 10; j++) {
                if(k == 0) {
                    if(ch1[i][j] == 1)
                        putpixel(j + 150, i + 230, RED);
                }
                if(k == 1) {
                    if(ch2[i][j] == 1)
                        putpixel(j + 200, i + 230, RED);
                }
                if(k == 2) {
                    if(ch3[i][j] == 1)
                        putpixel(j + 250, i + 230, RED);
                }
            }
            delay(200);
        }
    }
    
    getch();
    closegraph();
}
