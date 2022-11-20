#include <stdio.h>
#include <math.h>

#define LENG 1.0
#define GRAV 9.80665
#define MASS 1.0

double df1(double, double, double);
double df2(double, double, double);
void rk42(double, double, double[], int);

int main(void)
{
    double y[2];
    double x0 = 0.0, xf = 10.0, y10 = M_PI / 4.0, y20 = 0.0;
    int n = 100;
    
    y[0] = y10;
    y[1] = y20;
    
    rk42(x0, xf, y, n);
    
    return 0;
}

///二階の常微分方程式のルンゲクッタ

void rk42(double x0, double xf, double y[], int n)
{
    double x, h, k , l, k1, l1, k2, l2, k3, l3, k4, l4;
    int i;

    x = x0;
    h = (xf - x0) / n;
    
    for(i = 0; i < n; i++)
    {
        k1 = df1(x, y[0], y[1]);
        l1 = df2(x, y[0], y[1]);
        k2 = df1(x + 0.5 * h, y[0] + h * k1 / 2.0, y[1] + h* l1 / 2.0);
        l2 = df2(x + 0.5 * h, y[0] + h * k1 / 2.0, y[1] + h* l1 / 2.0);
        k3 = df1(x + 0.5 * h, y[0] + h * k2 / 2.0, y[1] + h* l2 / 2.0);
        l3 = df2(x + 0.5 * h, y[0] + h * k2 / 2.0, y[1] + h* l2 / 2.0);
        k4 = df1(x + h, y[0] + h * k3, y[1] + h * l3);
        l4 = df2(x + h, y[0] + h * k3, y[1] + h * l3);
        
        k = h * (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        l = h * (l1 + 2 * l2 + 2 * l3 + l4) / 6;
        
        x = x0 + (i + 1) * h;
        y[0] = y[0] + k;
        y[1] = y[1] + l;
        
        printf("%.6f %.6f %.6f\n",x,  y[0], y[1]);
    }
}

double df1(double x, double y1, double y2)
{
    return (y2);
}

double df2(double x, double y1, double y2)
{
    return (-GRAV * sin(y1) / LENG);
}
