#include <stdio.h>

int main()
{
    char string[100];
    int m, i, cnt;

    cnt = 0;

    printf("�ܾ �Է��ϼ��� : ");
    scanf("%s",string);

    m = sizeof(string)/sizeof(string[0]);

    for(i=0;i<m;i++){
        if(string[i]=='\0') break;
        cnt = cnt +1;
    }

    printf("%s�ܾ��� ���̴� %d���Դϴ�.",string,cnt);
    return 0;
}
