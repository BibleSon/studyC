#include <stdio.h>

int main()
{
    int ff, cm, distance, speed, hour, min;
    double cc, inch, sec;

    printf("ȭ�� �µ��� �Է��ϼ��� :");
    scanf("%d",&ff);

    cc = (ff-32)*5/9.0;

    printf("���� �µ��� %.1lf���Դϴ�.\n��Ƽ���� ���̸� �Է��ϼ��� :",cc);
    scanf("%d",&cm);

    inch = cm/2.54;

    printf("��ġ�� ����ϸ� %.1lf��ġ�Դϴ�.\n�Ÿ��� �ӷ��� �Է��ϼ��� :",inch);
    scanf("%d%d",&distance,&speed);

    hour = distance/speed;
    min = ((distance%speed)*1000)/((int)speed*1000/60);
    sec = ((distance%speed)*1000.0)/(speed*1000.0/60)*60 - min*60;


    printf("�ɸ��� �ð��� : %d�ð�, %d��, %.3lf���Դϴ�.",hour, min, sec);


    return 0;
}

