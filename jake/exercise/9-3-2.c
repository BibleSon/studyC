#include <stdio.h>

int main(void)
{
    char str[1000];
    char t;
    int i;
    int len;

    printf("�ܾ �Է��ϼ��� : ");
    scanf("%s", str);
    for (i = 0; i < 1000; i++)
    {
        if (str[i] == '\0') {
            break;
        }
    }

    len = i;
    for (i = 0; i < len / 2; i++) {
        t = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = t;
    }

    printf("�ܾ ��¤���� : %s\n", str);
    return 0;
}

