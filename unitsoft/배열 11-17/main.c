#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int main()
{
    char a[100];
    int i,j,cnt=0;
    gets(a);
    for(i=0; i<strlen(a); i++){
        if(a[i]!=' ')
            cnt++;

    }
    printf("%d",cnt);
}
*/

/*
int main()
{
    char str[100],i;
    int cnt=1;
    gets(str);
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]==' ' && str[i-1]!=' ')
            cnt++;
    }
    printf("%d",cnt);
}
*/

/*
int main()
{
    char str[100],i;

    gets(str);
    for(i=strlen(str)-1; i>=0; i--){
        printf("%c",str[i]);
    }

}
*/

/*
int main()
{
   char a[1][10];
   int i,j,cnt=0;
   for(i=0; i<1; i++)
    gets(a[i]);
   for(i=0; i<1; i++){
    cnt=0;
    for(j=0; a[i][j]!='\0'; j++)
        cnt++;
    printf("%d",cnt);
   }
}
*/

/*
int main()
{
    char str[100],i;
     gets(str);

    for(i=0; i<strlen(str); i++)
    {

        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }

        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }

    }
    printf("%s\n",str);
}
*/


/*
int main()
{
    int i,n,a[10],min=100;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

        if(min>a[i])
            min=a[i];

    }
    printf("%d",min);
}
*/
