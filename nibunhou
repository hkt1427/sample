#include <stdio.h>
#include <math.h>
#define eps 1.0e-7

double f(double);


int main(void)
{
    double c;
    double a = 0.0;
    double b = 0.20;
    
    while((b - a) > eps)
    {
	c = (a + b) / 2;
        
        if(f(c) * f(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
    
    printf("%.2f\n", c);
    
    return (0);
}

double f(double x)
{
    return (exp(-13.8 * 2.70 * x) - 0.01);
}

