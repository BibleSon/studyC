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
    printf("�ټ� ���� ������ �Է��ϼ���.\n");
    printf("�̸� : ");
    gets(str[0]);
    printf("���� : ");
    gets(str[1]);
    printf("�ּ� : ");
    gets(str[2]);
    printf("���� : ");
    gets(str[3]);
    printf("���� : ");
    gets(str[4]);
}

void print(char (*stg) [80])
{
    printf("\n\n�Էµ� ������...\n");
    printf("�̸� : %s\n���� : %s\n�ּ� : %s\n���� : %s\n���� : %s", stg[0], stg[1], stg[2], stg[3], stg[4]);
}
