#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a[100];
    for(i=0; i<100; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==99)

            break;


    }
    for(j=0; j<i; j++)
        printf("%d \n",a[j]);
}






























/*
int main()
{
    int a[10]={12,45,26,558,2,53,578,34,65,2};
    int min=100;
    for(int i=0; i<10; i++)
    {

        if(min>a[i])
           min=a[i];
    }
    printf("min %d \n", min);
}
*/


























/*
int main()
{
    int a[10]={12,45,26,558,2,53,578,34,65,2};
    int max=0;
    for(int i=0; i<10; i++)
    {
       // printf("%d",i);
        if(max<a[i])
        max=a[i];
    }
    printf("max= %d \n",max);
}
*/



























/*
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10}, evensum=0;
    for(int i=0; i<10; i++)
    {
        if(a[i]%2==0)
        evensum+=a[i];
    }
    printf("evensum %d \n", evensum);
}
*/


























/*
int main()
{
    int a[5], oddsum=0;
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==1);
        oddsum+=a[i];
            }
    printf("oddsum %d \n",oddsum);
    return 0;
}
*/



















/*
int main()
{
    int a[5], gop=1;
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
        gop*=a[i];
    }
    printf("gop= %d \n",gop);
    return 0;
}
*/




















/*
int main()
{
    int a[5], sum=0;
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("sum %d \n",sum);
    return 0;
}
*/

















/*
int main()
{
    int a[10], five=5;
    for(int i=0; i<10; i++)
    {
        a[i]=five*(i+1);
    }
    for(int i=0; i<10; i++)
        printf("%d \n",a[i]);
}
*/
