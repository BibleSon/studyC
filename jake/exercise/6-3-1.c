#include <stdio.h>

int main(void)
{
    char ch;
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%c", &ch);
    if (ch == 'm') {
        printf("�����Դϴ�.\n");
    } else if (ch == 'f') {
        printf("�����Դϴ�.\n");
    } else {
        printf("�߸� �Է��Ͽ����ϴ�.\n");
    }
    return 0;
}
