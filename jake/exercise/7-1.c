#include <stdio.h>

int main(void)
{
    int n = 1;
    int sum = 0;
    while(1) {
        printf("����� �Է��ϼ��� : ");
        scanf("%d", &n);

        if (n < 0) {
            break;
        }
        sum += n;
        printf("���ݱ��� �Էµ� ���� �� : %d\n", sum);
    }
    return 0;
}
