#include <stdio.h>

struct student {int num; char name[20]; int score[5]; double avg;};

struct student func(struct student s1);

int main()
{
    struct student st = {315,"ȫ�浿",{82,93,74,90,65}};

    st = func(st);

    printf("\n��� : %.1lf",st.avg);

    return 0;
}

struct student func(struct student s1)
{
    int i;
    double temp = 0;

    printf("�й� : %d\n�̸� : %s\n", s1.num, s1.name);
    printf("���� :");
    for(i=0;i<5;i++){
        printf("%5d",s1.score[i]);
        temp += s1.score[i];
    }
    s1.avg = temp/5.0;

    return s1;
}
