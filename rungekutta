#include <stdio.h>
#include <math.h>

double df(double, double);

double euler(double, double, double, int);

int main(void)
{
    int n = 10;
    double x0 = 0.0, y0 = 1.0, xf = 0.5;
    euler(x0, y0, xf, n);
    
    return (0);
}

double euler(double x0, double y0, double xf, int n)
{
    int i;
    double h, x, y, k1, k2, k3, k4;
    h = (xf - x0) / n;
    x = x0;
    y = y0;
    
    k1 = df(x0, y0);
    k2 = df(x0 + h / 2, y0 + h / 2 * k1);
    k3 = df(x0 + h / 2, y0 + h / 2 * k2);
    k4 = df(x0 + h, y0 + h * k3);
    
    for (i = 0; i < n; i++)
    {
        k1 = df(x, y);
        k2 = df(x + h / 2, y + h / 2 * k1);
        k3 = df(x + h / 2, y + h / 2 * k2);
        k4 = df(x + h, y + h * k3);
        
        y += h * (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        x += h;
        printf("%.5f %.5f \n", x, y);
    }
    return y;
}

double df(double x, double y)
{
    return (-13.8 * 2.70 * y);
}
