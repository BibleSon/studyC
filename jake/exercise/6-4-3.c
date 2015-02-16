#include <stdio.h>

int main(void)
{
    char code;
    double usage;
    double base;
    double kwperfee;
    double tax;

    printf("코드번호를 입력하세요(1가정용, 2산업용, 3교육용) : ");
    scanf("%c", &code);
    switch (code)
    {
        case '1':
            base = 1130;
            kwperfee = 127.8;
            tax = 0.09;
            break;
        case '2':
            base = 660;
            kwperfee = 88.5;
            tax = 0.08;
            break;
        case '3':
            base = 370;
            kwperfee = 52.0;
            tax = 0.05;
            break;
    }
    printf("전기 사용량을 입력하세요 : ");
    scanf("%lf", &usage);
    printf("전기요금은 %d원입니다.\n", (int)((base + (usage * kwperfee)) * (1 + tax)));
    return 0;
}
