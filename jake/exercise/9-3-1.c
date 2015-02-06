#include <stdio.h>

int main(void)
{
    char str[1000];
    int i;
    printf("단어를 입력하세요 : ");
    scanf("%s", str);
    
    for (i = 0; i < 1000; i++){
        if (str[i] == '\0')
            break;
    }

    printf("%s단어의 길이는 %d자입니다.\n", str, i);
    return 0;
}

