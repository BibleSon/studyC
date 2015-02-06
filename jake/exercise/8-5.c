
#include <stdio.h>

void res_disp(double val)
{
    printf("결과값은 %lf입니다.\n", val);
}

void menu_disp()
{
    printf("===============< 메뉴 >=================\n");
    printf("1. 덧셈(addition)\n");
    printf("2. 뺄셈(subtraction)\n");
    printf("3. 곱셈(multipication)\n");
    printf("4. 나눗셈(division)\n");
    printf(">> 원하는 메뉴를 선택하세요 : ");
}

double add()
{
    double a, b;
    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%lf%lf", &a, &b);
    return (a + b);
}

double sub()
{
    double a, b;
    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%lf%lf", &a, &b);
    return (a - b);
}

double mul()
{
    double a, b;
    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%lf%lf", &a, &b);
    return (a * b);
}

double div()
{
    double a, b;
    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%lf%lf", &a, &b);
    return (a / b);
}


int main()
{
    int menu;
    double res;
    menu_disp();
    scanf("%d", &menu);
    switch (menu)
    {
        case 1:
            res = add();
            break;
        case 2:
            res = sub();
            break;
        case 3:
            res = mul();
            break;
        case 4:
            res = div();
            break;
    }
    res_disp(res);
    return 0;
}
