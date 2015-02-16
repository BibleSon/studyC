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

    printf("나이를 입력하세요 : ");
    scanf("%d",&st.pf.age);
    printf("키를 입력하세요 : ");
    scanf("%lf",&st.pf.height);
    printf("이름을 입력하세요 : ");
    scanf("%s",st.pf.np);

    st.num = 5;
    st.grade = 4.4;

    printf("이름 : %s\n나이 : %d\n 키 : %.1lf\n학번 : %d\n학점 : %.1lf", st.pf.np, st.pf.age, st.pf.height, st.num, st.grade); 
    free(name);

    return 0;
}
