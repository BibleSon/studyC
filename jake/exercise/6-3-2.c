#include <stdio.h>

int main(void)
{
    int year;
    printf("연도를 입력하세요 : ");
    scanf("%d", &year);
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("윤년입니다.\n");
            } else {
                printf("평년입니다.\n");
            }
        } else {
            printf("윤년입니다.\n");
        }
    } else {
        printf("평년입니다.\n");
    }
    return 0;
}
