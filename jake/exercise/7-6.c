#include <stdio.h>

int main(void)
{
    int n = 0;
    int weight;

    while(1)
    {
        printf("����� ���Ը� �Է��ϼ���(���� : g) : ");
        scanf("%d", &weight);
        if (weight >= 300) {
            n++;
        } else {
            continue;
        }

        if (n == 30) {
            printf("��� �� ���� ��� ��ҽ��ϴ�.!\n");
            break;
        } else {
            printf("���� �հ���� �� : %d\n", n);
        }
    }
    return 0;
}
