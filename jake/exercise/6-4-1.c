#include <stdio.h>

int main(void)
{
    char grade;
    int fee = -1;
    printf("�г��� �Է��ϼ��� : ");
    scanf("%c", &grade);
    switch (grade) 
    {
        case '1':
            fee = 100 + 30;
            break;
        case '2':
        case '3':
            fee = 100;
            break;
        case '4':
            fee = 100 + 10;
            break;
        default:
            printf("�г��� �߸� �Է��Ͽ����ϴ�.\n");
            break;
    }
    if (fee != -1) {
        printf("��ϱ��� %d�����Դϴ�.\n", fee);
    }
    return 0;
}
