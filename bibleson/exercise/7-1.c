#include <stdio.h>

int main()
{
    int num, total;

    num = 0;
    total = 0;

    while(num>=0)
    {
        printf("����� �Է��ϼ��� :");
        scanf("%d",&num);
        total = total + num;
        printf("���ݱ��� �Էµ� ���� ��: %d\n",total);
    }

    return 0;
}
