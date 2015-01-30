#include <stdio.h>

int main(void)
{
    char c;
    printf("문자를 입력하세요 : ");
    scanf("%c", &c);
    printf("문자 %c의 아스키코드값은 %d입니다.\n", c, c);
    return 0;
}
