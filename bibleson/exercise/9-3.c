#include <stdio.h>

int main()
{
    char string[100];
    int m, i, cnt;

    cnt = 0;

    printf("단어를 입력하세요 : ");
    scanf("%s",string);

    m = sizeof(string)/sizeof(string[0]);

    for(i=0;i<m;i++){
        if(string[i]=='\0') break;
        cnt = cnt +1;
    }

    printf("%s단어의 길이는 %d자입니다.",string,cnt);
    return 0;
}

