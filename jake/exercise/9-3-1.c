#include <stdio.h>

int main(void)
{
    char str[1000];
    int i;
    printf("�ܾ �Է��ϼ��� : ");
    scanf("%s", str);

    for (i = 0; i < 1000; i++){
        if (str[i] == '\0')
            break;
    }

    printf("%s�ܾ��� ���̴� %d���Դϴ�.\n", str, i);
    return 0;
}
