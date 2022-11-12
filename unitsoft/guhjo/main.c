#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[8]={69,10,30,2,16,8,31,22};
    int i,j,tmp;
    printf("before sort \n");
    for(i=0; i<8; i++)
        printf("a[%d]=%d\n",i,a[i]);

    for(i=0; i<7; i++){
        int max=a[i], maxIndex=i;
        for(j=i+1; j<8; j++){
            if(max<a[j]) {
                max=a[j];
                maxIndex=j;
            }
        }
        if(max>a[i]){
            a[maxIndex]=a[i];
            a[i]=max;
        }
    }
    printf("정렬 후 \n");
    for(i=0; i<8; i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}


































/*
int main()
{
    int a[8]={69,10,30,2,16,8,31,22};
    int i,j,tmp;
    printf("before sort \n");
    for(i=0; i<8; i++)
    {
        printf("a[%d]= %d\n",i,a[i]);
    }
    for(i=0; i<8; i++){
        for(j=i+1; j<8; j++){
            if(a[i]>a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    printf("정렬 후 \n");
    for(i=0; i<8; i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}
*/



















/*
int main()
{
    int a[5]={10,20,30,40,50},b[5]={0};
    printf("array copy \n");
    for(int i=0; i<5; i++)
    {
        b[i]=a[i];
    }
    for( int i=0; i<5; i++)
    printf("a[%d] = %d b[%d]=%d\n",i,a[i],i,b[i]);
}
*/

























/*
int main()
{
 int i, a[5]; printf("input\n");
 for(i=0; i<5; i++)
 {
     scanf("%d",&a[i]);
 }
 printf("역으로 출력\n");
 for(i=4; i>=0; i--)
 {
     printf("%d \n",a[i]);
 }
}
*/
