#include <stdio.h>

struct cracker {int price; int calories;};

int main()
{
    struct cracker crk;
    printf("�ٻ���� ���ݰ� ������ �Է��ϼ��� : ");
    scanf("%d%d",&crk.price,&crk.calories);
    printf("�ٻ���� ���� : %d��\n�ٻ���� ���� : %dkcal",crk.price,crk.calories);

    return 0;
}
