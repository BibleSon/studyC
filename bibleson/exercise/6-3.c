#include <stdio.h>
int main()
{
    char sex;
    int weight, height, y1, y2, y3, year;
    double bmi;

    printf("���ڸ� �Է��ϼ��� :");
    scanf("%c",&sex);

    if(sex == 'f'){
        printf("�����Դϴ�.\n");
    }
    else if(sex == 'm'){
        printf("�����Դϴ�.\n");
    }
    else {
        printf("�߸� �Է��Ͽ����ϴ�.\n");
    }

    printf("������ �Է��ϼ��� :");
    scanf("%d",&year);
    y1 = year%4;
    y2 = year%100;
    y3 = year%400;

    if((y1==0)&&(y2!=0)){
        printf("�����Դϴ�.\n");
    }
    else if((y1==0)&&(y2==0)&&(y3==0)){
        printf("�����Դϴ�.\n");
    }
    else {printf("����Դϴ�.\n"); }

    printf("������ �Է��ϼ���(m/f) :");
    scanf(" %c",&sex);
    printf("�����Ը� �Է��ϼ���(kg) :");
    scanf("%d",&weight);
    printf("Ű�� �Է��ϼ���(cm) :");
    scanf("%d",&height);
    bmi = weight/((height*0.01)*(height*0.01));
    printf("����� BMI�� : %.1lf�Դϴ�.\n",bmi);    
    if(sex == 'm'){
        if(bmi<20) { printf("��ü���Դϴ�."); }
        else if(bmi>=20&&bmi<25) { printf("ǥ��ü���Դϴ�."); }
        else if(bmi>=25) { printf("��ü���Դϴ�."); }
    }
    else if(sex == 'f'){
        if(bmi<18.5) { printf("��ü���Դϴ�."); }
        else if(bmi>=18.5&&bmi<25) { printf("ǥ��ü���Դϴ�."); }
        else if(bmi>=25) { printf("��ü���Դϴ�."); }
    }

    return 0;
}
