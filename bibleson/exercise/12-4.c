#include <stdio.h>
#include <string.h>

int main()
{
    char season[100] = {0};
    char flower[100] = {0};

    printf("�������� �Է��ϼ��� : ");
    scanf("%s", season);

    if (strcmp(season, "��") == 0){ strcpy(flower,"������"); }
    else if (strcmp(season, "����") == 0){ strcpy(flower,"���"); }
    else if (strcmp(season, "����") == 0){ strcpy(flower,"��ȭ"); }
    else if (strcmp(season, "�ܿ�") == 0){ strcpy(flower,"��ȭ"); }
    else { strcpy(flower,"�������� �߸� �Է��Ͽ����ϴ�. >"); }

    printf("%s",flower);

    return 0;
}
