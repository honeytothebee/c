#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    while(i<=n-1)
    {
        if(n%i==0)
            printf("�Ҽ��� �ƴմϴ�");
    }
    else
        printf("�Ҽ� �Դϴ�");
}
