#include <stdio.h>

int main(void)
{
    char gender;
    int weight;
    int height;
    double bmi;
    printf("������ �Է��ϼ���(m/f) : ");
    scanf("%c", &gender);
    printf("�����Ը� �Է��ϼ���(kg) : ");
    scanf("%d", &weight);
    printf("Ű�� �Է��ϼ���(cm) : ");
    scanf("%d", &height);

    bmi = weight / ((height / 100.0f) * (height / 100.0f));

    printf("����� BMI�� : %.1f�Դϴ�.\n", bmi);
    if (gender == 'm')
    {
        if (bmi < 20.0f) {
            printf("��ü���Դϴ�.\n");
        } else if (bmi < 25.0f) {
            printf("ǥ��ü���Դϴ�.\n");
        } else {
            printf("��ü���Դϴ�.\n");
        }
    } else if (gender == 'f')
    {
        if (bmi < 18.5f) {
            printf("��ü���Դϴ�.\n");
        } else if (bmi < 25.0f) {
            printf("ǥ��ü���Դϴ�.\n");
        } else {
            printf("��ü���Դϴ�.\n");
        }
    }

    return 0;
}
