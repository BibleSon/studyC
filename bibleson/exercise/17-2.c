#include <stdio.h>
#include <stdlib.h>

struct profile {int age; double height; char*np;};
struct student {struct profile pf; int num; double grade;};

int main()
{
    char *name;
    struct student st;

    name = (char*)malloc(20*sizeof(char));
    st.pf.np = name;

    printf("���̸� �Է��ϼ��� : ");
    scanf("%d",&st.pf.age);
    printf("Ű�� �Է��ϼ��� : ");
    scanf("%lf",&st.pf.height);
    printf("�̸��� �Է��ϼ��� : ");
    scanf("%s",st.pf.np);

    st.num = 5;
    st.grade = 4.4;

    printf("�̸� : %s\n���� : %d\n Ű : %.1lf\n�й� : %d\n���� : %.1lf", st.pf.np, st.pf.age, st.pf.height, st.num, st.grade); 
    free(name);

    return 0;
}
