#include <stdio.h>

int main()
{
    unsigned int age, day, hour, min, sec;

    printf("�� ����� ��� �ͽ��ϱ�?");
    scanf("%d",&age);

    if(age<70){printf("������ž���^^ �ٽ� �Է����ּ���.");}
    else {
        day = 365*age;
        hour = day*24;
        min = hour*60;
        sec = min*60;
        printf("%u��, %u�ð�, %u��, %u���Դϴ�.",day,hour,min,sec);
    }

    return 0;
}
