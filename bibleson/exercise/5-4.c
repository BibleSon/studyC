#include <stdio.h>

int main()
{
    int weight;
    double height, bmi;

    printf("�����Ը� �Է��ϼ���(kg) :");
    scanf("%d",&weight);
    printf("Ű�� �Է��ϼ���(m) :");
    scanf("%lf",&height);

    bmi = weight/(height*height);

    printf("����� BMI�� : %.1lf�Դϴ�.",bmi);

    return 0;
}
