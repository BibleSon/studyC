#include <stdio.h>

int main()
{
    int tot, i, age;
    double avg;

    tot = 0;

    for(i=1;i<=5;i++)
    {
        printf("%d. ���̸� �Է��ϼ��� : ",i);
        scanf("%d",&age);
        tot = tot + age;
    }
    avg = tot/5.0;
    printf("�ټ����� ��� ���̴� %.1lf�Դϴ�.",avg);

    return 0;
}
