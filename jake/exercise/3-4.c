#include <stdio.h>
int main(void)
{
    int history, literature, artistic;
    int sum;
    printf("����, ����, ���� ������ �Է��ϼ��� : ");
    scanf("%d%d%d", &history, &literature, &artistic);
    sum = history + literature + artistic;
    printf("������ %d�̰� ����� %lf�Դϴ�.\n", sum, sum / 3.0);
    return 0;
}

