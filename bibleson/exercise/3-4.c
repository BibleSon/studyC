#include <stdio.h>

int main()
{
    int his, lit, art, tot;
    double avg;

    printf("����, ����, ���� ������ �Է��ϼ��� : ");
    scanf("%d %d %d",&his,&lit,&art);

    tot = his + lit + art;
    avg = tot/3.0;

    printf("������ %d�̰� ����� %lf�Դϴ�.",tot,avg);
    return 0;
}
