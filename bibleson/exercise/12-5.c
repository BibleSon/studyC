#include <stdio.h>
#include <string.h>

int main()
{
    char last_name[20] = {0};
    char first_name[20] = {0};
    char full_name[50] = {0};

    printf("���� �Է��ϼ��� : ");
    scanf("%s",last_name);
    strcat(full_name,last_name);

    printf("�̸��� �Է��ϼ��� : ");
    scanf("%s",first_name);
    strcat(full_name," ");
    strcat(full_name,first_name);

    printf("���� ������ �̸� : %s", full_name);

    return 0;
}
