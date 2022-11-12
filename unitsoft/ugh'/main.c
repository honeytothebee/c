#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1; i<=2; i++)
    {
        for(j=2; j<i ;j++)
            if(i%j==0)
        {
            break;
        }
        if(i==j)
        {
            printf("%d은 소수 입니다");
        }
    }
}
