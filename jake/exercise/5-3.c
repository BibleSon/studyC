#include <stdio.h>

int main(void)
{
    char name[20] = "ȫ�浿";
    int korean = 90, english = 75, math = 80;
    int tot = korean + english + math;
    double avg = tot / 3.0;

    printf("|----------|--------|--------|--------|--------|----------|\n");
    printf("|   �̸�   |  ����  |  ����  |  ����  |  ����  |   ���   |\n");
    printf("|----------|--------|--------|--------|--------|----------|\n");
    printf("|%-13s|%8d|%8d|%8d|%8d|%10.2f|\n", name, korean, english, math, tot, avg);
    printf("|----------|--------|--------|--------|--------|----------|\n");

    return 0;
}

