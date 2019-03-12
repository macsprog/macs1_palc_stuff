#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// declaration de la fonction rotation
void fail_rotate(double x, double y, double x0,
            double y0, double theta);

// declaration de la fonction rotation
void rotate(double* p_x, double* p_y, double x0,
            double y0, double theta);

void rotate(double* p_x, double* p_y, double x0,
            double y0, double theta){
                *p_x = x0 + cos(theta) * (*p_x - x0) - sin(theta) * (*p_y - y0);
                *p_y = y0 + sin(theta) * (*p_x - x0) + cos(theta) * (*p_y - y0);
            }


// definition de la fonction rotation
void fail_rotate(double x, double y, double x0,
            double y0, double theta)
{
    x = x0 + cos(theta) * (x - x0) - sin(theta) * (y - y0);
    y = y0 + sin(theta) * (x - x0) + cos(theta) * (y - y0);
}

int main(void)
{
    double theta = 3.26;
    double x = 1.3;
    double y = 2.89;
    double x0 = 1.0;
    double y0 = 9.54;

    printf("x=%g y=%g\n",x,y);
    rotate(&x, &y, x0, y0, theta);
    printf("x=%g y=%g\n",x,y);

    return EXIT_SUCCESS;
}