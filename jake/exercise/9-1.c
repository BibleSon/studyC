#include <stdio.h>

int main(void)
{
    int arr[5];
    int max;
    int i;
    printf("�ټ� ���� ���ڸ� �Է��ϼ��� : ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 0; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }


    printf("���� ū ���� : %d�Դϴ�.\n", max);
    return 0;
}

