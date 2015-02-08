#include <stdio.h>
#include <string.h>

int main()
{
    char last_name[20] = {0};
    char first_name[20] = {0};
    char full_name[50] = {0};

    printf("성을 입력하세요 : ");
    scanf("%s",last_name);
    strcat(full_name,last_name);

    printf("이름을 입력하세요 : ");
    scanf("%s",first_name);
    strcat(full_name," ");
    strcat(full_name,first_name);

    printf("성을 포함한 이름 : %s", full_name);

    return 0;
}

