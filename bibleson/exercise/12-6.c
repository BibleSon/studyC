#include <stdio.h>
#include <string.h>

int main()
{
    char name[20] = {0};
    char number[50] = {0};
    char address[100] = {0};
    char res[1000] = {0};

    printf("�̸��� �Է��ϼ��� : ");
    gets(name);
    strcat(res,name);
    strcat(res,", ");

    printf("��ȭ��ȣ�� �Է��ϼ��� : ");
    gets(number);
    strcat(res,number);
    strcat(res,", ");

    printf("�ּҸ� �Է��ϼ��� : ");
    gets(address);
    strcat(res,address);

    puts(res);

    return 0;
}

