#include <stdio.h>

int main()
{
    char name[100] = "ȫ�浿";
    int kor = 90;
    int eng = 75;
    int math = 80;
    int total;
    double avg;

    total = kor + eng + math;
    avg = total/3.0;

    printf("|----------|--------|--------|--------|--------|----------|\n");
    printf("|   �̸�   |  ����  |  ����  |  ����  |  ����  |   ���   |\n");
    printf("|----------|--------|--------|--------|--------|----------|\n");
    printf("|%-13s|%8d|%8d|%8d|%8d|%10.2lf|\n",name,kor,eng,math,total,avg);
    printf("|----------|--------|--------|--------|--------|----------|\n");

    return 0;
}
