#include <stdio.h>
#include <math.h>

int main(void)
{
    double k = 0.1;
    int i, j;
    int N = 100;
    
    double Tp[N];
    double T[N];

    Tp[0] = 0.0;
    
    for(i = 1; i <= N - 1; i++)
    {
        Tp[i] = 100.0;
    }
    Tp[N] = 0.0;
    
    for(j = 1; j <= 10000; j++)
    {
        for(i = 1; i <= N - 1; i++)
        {
            T[i] = Tp[i] + k * (Tp[i + 1] + Tp[i - 1] - 2 * Tp[i]);
        }
        
        for(i = 1; i <= N - 1; i++)
	{
	    Tp[i] = T[i];
	}
	printf("%d %.6f %.6f %.6f \n", j, T[10], T[30], T[50]);
    }

    return (0);
}
