#include <stdio.h>

int main(void)
{
    double w, h;
    printf("�����Ը� �Է��ϼ���(kg) : ");
    scanf("%lf", &w);
    printf("Ű�� �Է��ϼ���(m) : ");
    scanf("%lf", &h);
    printf("����� BMI�� : %.1f�Դϴ�.\n", w / (h*h));
    return 0;
}
