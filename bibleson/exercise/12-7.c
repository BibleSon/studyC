#include <stdio.h>
#include <string.h>

int main()
{
    int ch;
    char str[100] = {0};
    int i;

    while(1){
        i = 0;
        printf("���ڿ��� �Է��ϼ���(����� Enter) : ");
        ch = getchar();
        if(ch == '\n') break;
        str[0] = ch;
        i++;
        while(1){
            ch = getchar();
            if(ch == '\n') break;
            str[i] = ch;
            i++;
        }
        str[i] = '\0';

        printf("�Էµ� ���ڿ� : %s\n",str);
    }
    return 0;
}
