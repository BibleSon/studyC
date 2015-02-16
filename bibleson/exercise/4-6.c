#include <stdio.h>

int main()
{
    char ch;

    printf("문자를 입력하세요 :");
    scanf("%c",&ch);
    printf("문자 %c의 아스키코드값은 %d입니다.",ch,ch);
    return 0;
}
