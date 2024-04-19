#include <stdio.h>

int main()
{
    int i = 1;
    int n, result;

    scanf("%d",&n);

    for(i ;i < 10+1;i++)
    {
        result = i * n;
        printf("%d x %d = %d\n",i,n,result);
    }
    return 0;
}