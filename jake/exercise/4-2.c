#include <stdio.h>

int main(void)
{
    int n;
    
    printf("정수값을 입력하세요 : ");
    scanf("%d", &n);
    printf("입력된 값은 8진수로 %06o입니다.\n", n);
    printf("입력된 값은 16진수로 0x%x입니다.\n", n);
    return 0;
}
