//Liang Barsky's Line Clipping Algorithm

#include <stdio.h>
#include <graphics.h>

// Function to calculate Liang-Barsky parameters and return whether the line is visible
int liangBarsky(int x1, int y1, int x2, int y2, int xmin, int ymin, int xmax, int ymax, double* t1, double* t2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int i;
    double p[4], q[4];
    double t_enter = 0.0, t_exit = 1.0;
    
    p[0] = -dx;
    p[1] = dx;
    p[2] = -dy;
    p[3] = dy;
    
    q[0] = x1 - xmin;
    q[1] = xmax - x1;
    q[2] = y1 - ymin;
    q[3] = ymax - y1;
    
    for (i = 0; i < 4; i++) {
        if (p[i] == 0) {
            if (q[i] < 0) {
                return 0; // Line is parallel to the clipping boundary and outside
            }
        } else {
            double t = q[i] / p[i];
            if (p[i] < 0) {
                if (t > t_exit) {
                    return 0; // Line is outside the clipping window
                }
                if (t > t_enter) {
                    t_enter = t;
                }
            } else {
                if (t < t_enter) {
                    return 0; // Line is outside the clipping window
                }
                if (t < t_exit) {
                    t_exit = t;
                }
            }
        }
    }
    
    *t1 = t_enter;
    *t2 = t_exit;
    return 1; // Line is visible
}

int main() {
    int x1, y1, x2, y2;
    int xmin, ymin, xmax, ymax;
    double t1, t2;
    int gd = DETECT, gm;
    
    initgraph(&gd, &gm, "..//BGI");
    
    printf("Enter line coordinates (x1 y1 x2 y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
    printf("Enter clipping window (xmin ymin xmax ymax): ");
    scanf("%d %d %d %d", &xmin, &ymin, &xmax, &ymax);
    
    rectangle(xmin, ymin, xmax, ymax);
    line(x1, y1, x2, y2);
    
    if (liangBarsky(x1, y1, x2, y2, xmin, ymin, xmax, ymax, &t1, &t2)) {
        int x1_clip = x1 + t1 * (x2 - x1);
        int y1_clip = y1 + t1 * (y2 - y1);
        int x2_clip = x1 + t2 * (x2 - x1);
        int y2_clip = y1 + t2 * (y2 - y1);
        
        printf("Clipped line: (%d, %d) to (%d, %d)\n", x1_clip, y1_clip, x2_clip, y2_clip);
        setcolor(GREEN);
        line(x1_clip, y1_clip, x2_clip, y2_clip);
    } else {
        printf("Line is completely outside the clipping window.\n");
    }
    
    getch();
    closegraph();
    return 0;
}
