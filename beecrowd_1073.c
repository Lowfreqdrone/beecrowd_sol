#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    int n;
    int i = 1;

    scanf("%d",&x);
    for(i; i <= x; i++)
    {
        if(i % 2 == 0)
        {
            n = pow(i,2);
            printf("%d^2 = %d\n", i, n);
        }
    }
    return 0;
}