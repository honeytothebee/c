#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ���ڿ� ��
int main()
{
    char str1[] = "programmer";
    char str2[]=  "programmer";

    int com = strcmp(str1, str2);
    if(com == 0){
        printf("�� ���ڿ��� �����ϴ�.\n");
    } else if(com == 1){
    printf("str1 > str2\n");
    }
    else if(com == -1){
        printf("str1 < str2\n");
    }
}
*/

/*
int main()
{
    char str[80];

    strcpy( str, "these" );
    strcat( str, "strings" );
    strcat( str, "are");
    strcat( str, "concatenated");

    printf( "%s", str);
    return 0;
}
*/

/* c��� ���ڿ� ���̱�
int main()
{
    char dest[30] = "C";
    char source[30] = "PROGRAMMER";

    strcat(dest, source);
    printf("%s\n", dest);
}
*/



/* c��� ���ڿ� ����
int main()
{
    char str1[]="Sample string";
    char str2[40];
    char str3[40];
    strcpy( str2, str1 );
    strcpy( str3, "copy successful" );

    printf( "str1: %s\n", str1 );
    printf( "str2: %s\n", str2 );
    printf( "str3: %s\n", str3 );
}
*/







































/*
int main()
{
    char str1[] = "programmer";
    char str2[30];

    strcpy(str2, str1);
    printf("%s, %s\n", str1, str2);
}
*/
