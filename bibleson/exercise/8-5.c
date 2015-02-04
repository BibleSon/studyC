#include <stdio.h>
int menu_disp()
{
    int num;
    printf("==========< 메뉴 >==========\n");
    printf("1. 덧셈(addition)\n");
    printf("2. 뺄셈(subtraction)\n");
    printf("3. 곱셈(multipication)\n");
    printf("4. 나눗셈(division)\n");
    printf(">> 원하는 메뉴를 선택하세요 : ");
    scanf("%d",&num);
    return num;
}

double add(double num1, double num2)
{
    double res;
    res = num1 + num2;
    return res;
}

double sub(double num1, double num2)
{
    double res;
    res = num1 - num2;
    return res;
}

double mul(double num1, double num2)
{
    double res;
    res = num1 * num2;
    return res;
}

double div(double num1, double num2)
{
    double res;
    res = num1 / num2;
    return res;
}

int main()
{
    int num;
    double num1, num2, res;

    num = menu_disp();
    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%lf%lf",&num1,&num2);

    switch(num){
        case 1: res = add(num1, num2);
                break;
        case 2: res = sub(num1, num2);
                break;
        case 3: res = mul(num1, num2);
                break;
        case 4: res = div(num1, num2);
                break;
    }
    printf("결과값은 %lf입니다.",res);
    return 0;
}


