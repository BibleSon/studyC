#include <stdio.h>

int main(void)
{
    char ch;
    printf("문자를 입력하세요 : ");
    scanf("%c", &ch);
    if (ch == 'm') {
        printf("남자입니다.\n");
    } else if (ch == 'f') {
        printf("여자입니다.\n");
    } else {
        printf("잘못 입력하였습니다.\n");
    }
    return 0;
}
