#include <stdio.h>
 
int main() {
    float num;
    int pstv;
    for(int i = 0; i < 6; i++)
    {
        scanf("%f",&num);
        if(num > 0){
            pstv++;
        }
    }
    printf("%d valores positivos\n",pstv);
}