#include <stdio.h>

int main()
{
    char string[100];
    int tmp, i, cnt;

    cnt = 0;

    printf("�ܾ �Է��ϼ��� : ");
    scanf("%s",string);

    for(i=0;i<100;i++){
        if(string[i] == '\0') break;
        cnt = cnt +1;
    }

    for(i=0;i<(cnt/2);i++){
        tmp = string[i];
        string[i] = string[cnt-1-i];
        string[cnt-1-i] = tmp;
    }

    printf("�ܾ �������� : %s",string);

    return 0;
}
