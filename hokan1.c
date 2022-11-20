#include <stdio.h>
#include <math.h>

double lagrange(double xx[], double yy[], int n, double x)
{
double fx, Li;
int i, j;

fx = 0.0;
for (i = 0; i < n; i++)
{
Li = 1.0;
for (j = 0; j < n; j++)
{
if (i != j)
{
Li = Li * (x - xx[j]) / (xx[i] - xx[j]);
}
}
fx += yy[i] * Li;
}

return fx;
}

int main(void)
{
    double xx[3], yy[3], x, result;
    int n, i;
    
    n=3;
    x=0.0;
    xx[0]=0.0;
    xx[1]=2.0;
    xx[2]=4.0;
    
    yy[0]=sin(0.0)+0.0;
    yy[1]=sin(2.0)+2.0;
    yy[2]=sin(4.0)+4.0;
    
    result = lagrange(xx, yy, n, x);
    printf("%f %f\n", result);
    for (i=0.0; i<=25; i++)
    {
        x+=0.2;
	result = lagrange(xx, yy, n, x);
	printf("%f %f\n", result, x);
    }
    return 0;
}
