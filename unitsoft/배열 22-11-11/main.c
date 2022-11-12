#include <stdio.h>
#include <stdlib.h>
#include <time.h>



























/*
int main()
{
    int jumsu[2][3]={23,25,14,56,78,94},i,j,cnt=0;
    printf(" 2 차원 배열 출력");
    for(i=0; i<2; i++){
            for(j=0; j<3; j++)
            {
                if(jumsu[i][j]%2==0)
                {
                    printf("%3d",jumsu[i][j]);
                    cnt++;
                }
            }

    }
    printf(" 짝수 개수는 %d \n",cnt);
}
*/


























/*
int main()
{
   int jumsu[2][3]={10,20,30,40,50,60},i,j,sum=0;
   printf(" 2차원 배열 출력\n");
   for(i=0; i<2; i++){
    for(j=0; j<3; j++)
    {
        printf("%3d",jumsu[i][j]);
        sum+=jumsu[i][j];
    }
    printf("\n");
   }
   printf("총합은 %d \n",sum);


}
*/




















/*
int main(){

int jumsu[3][5]={{1,56,57,89,88},{2,10,20,30,40},{3,50,60,70,80}};
int i,j;
printf(" 학번 국어 영어 수학 컴퓨터\n");
for(i=0; i<3; i++){
    for(j=0; j<5; j++){
        printf("%3d",jumsu[i][j]);

    }
    printf("\n");

}
}
*/


























/*
int main()
{
  char a[100],b;
  int cnt=0,i;
  printf("문자열을 입력하라\n");
  scanf("%s",a);
  printf("찾을 문자를 입력하시오\n");
  scanf(" %c",&b);
  for(i=0; a[i]!=NULL; i++)
  {
      if(a[i]==b)
        printf("%c문자 %d번 째에 있습니다",b,i+1);
  }
}
*/



















/*
int main()
{
    char a[6]="seoul";

    printf("%c%c%c%c%c\n",a[0],a[1],a[2],a[3],a[4]);
    printf("%s",a);
}
*/























/*
int main()
{
    char a[5];
    a[0]='a';
    a[1]='b';
    a[2]='c';
    a[3]='d';
    a[4]='e';
       printf("%c%c%c%c%c\n",a[0],a[1],a[2],a[3],a[4]);
       printf("%s",a);

}
*/














/*
int main()
{
    int a[10],i,j;
    srand(time (NULL));
    for(i=0; i<10; i++)
        a[i]=rand()%50;

    for(i=0; i<10; i++)
        printf("%d \n",a[i]);

}
*/
