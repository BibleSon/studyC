#include <stdio.h>

void res_disp(double val)
{
    printf("������� %lf�Դϴ�.\n", val);
}

void menu_disp()
{
    printf("===============< �޴� >=================\n");
    printf("1. ����(addition)\n");
    printf("2. ����(subtraction)\n");
    printf("3. ����(multipication)\n");
    printf("4. ������(division)\n");
    printf(">> ���ϴ� �޴��� �����ϼ��� : ");
}

double add()
{
    double a, b;
    printf("�� ���� ���ڸ� �Է��ϼ��� : ");
    scanf("%lf%lf", &a, &b);
    return (a + b);
}

double sub()
{
    double a, b;
    printf("�� ���� ���ڸ� �Է��ϼ��� : ");
    scanf("%lf%lf", &a, &b);
    return (a - b);
}

double mul()
{
    double a, b;
    printf("�� ���� ���ڸ� �Է��ϼ��� : ");
    scanf("%lf%lf", &a, &b);
    return (a * b);
}

double div()
{
    double a, b;
    printf("�� ���� ���ڸ� �Է��ϼ��� : ");
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
