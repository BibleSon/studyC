#include <stdio.h>

void scan(char (*str) [80]);
void print(char (*stg) [80]);

int main()
{
    char string[5][80]={0};

    scan(string);
    print(string);

    return 0;
}

void scan(char (*str) [80])
{
    printf("다섯 개의 문장을 입력하세요.\n");
    printf("이름 : ");
    gets(str[0]);
    printf("성별 : ");
    gets(str[1]);
    printf("주소 : ");
    gets(str[2]);
    printf("직업 : ");
    gets(str[3]);
    printf("연봉 : ");
    gets(str[4]);
}

void print(char (*stg) [80])
{
    printf("\n\n입력된 문장은...\n");
    printf("이름 : %s\n성별 : %s\n주소 : %s\n직업 : %s\n연봉 : %s", stg[0], stg[1], stg[2], stg[3], stg[4]);
}

