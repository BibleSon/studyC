#include <stdio.h>

int main()
{
    int kw;
    double cost, totalcost;

    printf("���� ��뷮�� �Է��ϼ���(kw) :");
    scanf("%d",&kw);

    cost = kw*88.5+660;
    totalcost = cost + (cost*0.09);

    printf("���� ��� ����� %lf�� �Դϴ�.",totalcost);
    return 0;


}
