#include <stdio.h>
int menu_disp()
{
    int num;
    printf("==========< �޴� >==========\n");
    printf("1. ����(addition)\n");
    printf("2. ����(subtraction)\n");
    printf("3. ����(multipication)\n");
    printf("4. ������(division)\n");
    printf(">> ���ϴ� �޴��� �����ϼ��� : ");
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
    printf("�� ���� ���ڸ� �Է��ϼ��� : ");
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
    printf("������� %lf�Դϴ�.",res);
    return 0;
}
