#include <stdio.h>

int main()
{
    int n, out, in, x;
    int i = 0;

    scanf("%d",&x);

    for(i; i < x; i++)
    {
        scanf("%d",&n);

        if(n >= 10 && n <= 20)
        {
            in++;
        } else
        {
            out++;
        }
    }

    printf("%d in\n",in);
    printf("%d out\n",out);

    return 0;
}