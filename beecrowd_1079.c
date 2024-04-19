#include <stdio.h>

int main()
{
    double t1,t2,t3,result;
    int i,n;

    scanf("%d",&n);

    scanf("%lf,%lf,%lf",&t1,&t2,&t3);
    for (i = 0; i < n; i++)
    {
        result = ((t1 * 2) + (t2 * 3) + (t3 * 5)) / 10.0;
        printf("%.1f\n",result);
    }
    return 0;
}