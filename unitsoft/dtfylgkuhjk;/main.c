#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    while(i<=n-1)
    {
        if(n%i==0)
            printf("소수가 아닙니다");
    }
    else
        printf("소수 입니다");
}
