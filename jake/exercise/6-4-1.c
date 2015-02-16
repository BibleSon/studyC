#include <stdio.h>

int main(void)
{
    char grade;
    int fee = -1;
    printf("학년을 입력하세요 : ");
    scanf("%c", &grade);
    switch (grade) 
    {
        case '1':
            fee = 100 + 30;
            break;
        case '2':
        case '3':
            fee = 100;
            break;
        case '4':
            fee = 100 + 10;
            break;
        default:
            printf("학년을 잘못 입력하였습니다.\n");
            break;
    }
    if (fee != -1) {
        printf("등록금은 %d만원입니다.\n", fee);
    }
    return 0;
}
