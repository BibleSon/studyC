#include <stdio.h>
int main()
{
    int code, watt, grade;
    double num1, num2, num;
    char alu;
    double fee;

    printf("�г��� �Է��ϼ��� :");
    scanf("%d",&grade);

    switch(grade){
        case 1:
            printf("��ϱ��� 130�����Դϴ�.\n");
            break;
        case 2:
            printf("��ϱ��� 100�����Դϴ�.\n");
            break;
        case 3:
            printf("��ϱ��� 100�����Դϴ�.\n");
            break;
        case 4:
            printf("��ϱ��� 110�����Դϴ�.\n");
            break;
        default:
            printf("�г��� �߸� �Է��Ͽ����ϴ�.\n");
            break;
    }

    printf("������ �Է��ϼ��� :");
    scanf("%lf%c%lf",&num1,&alu,&num2);

    switch(alu){
        case '+':
            num = num1 + num2;
            printf("�������� %.2lf�Դϴ�.\n",num);
            break;
        case '-':
            num = num1 - num2;
            printf("�������� %.2lf�Դϴ�.\n",num);
            break;
        case '*':
            num = num1 * num2;
            printf("�������� %.2lf�Դϴ�.\n",num);
            break;
        case '/':
            num = num1 / num2;
            printf("�������� %.2lf�Դϴ�.\n",num);
            break;
        default:
            printf("���� �����ȣ�Դϴ�.\n");
            break;
    }

    printf("�ڵ��ȣ�� �Է��ϼ���(1������, 2�����, 3������) :");
    scanf("%d",&code);
    printf("���� ��뷮�� �Է��ϼ���(kw) :");
    scanf("%d",&watt);

    switch(code){
        case 1:
            fee = (1130 + (watt*127.8)) * 1.09;
            printf("�������� %.0lf���Դϴ�.", fee);
            break;
        case 2:
            fee = (660 + (watt*88.5)) *1.08;
            printf("�������� %.0lf���Դϴ�.", fee);
            break;
        case 3:
            fee = (370 + (watt*52.0)) * 1.05;
            printf("�������� %.0lf���Դϴ�.", fee);
            break;
        default:
            printf("���� �ڵ��Դϴ�.");
            break;
    }
    return 0;
}
