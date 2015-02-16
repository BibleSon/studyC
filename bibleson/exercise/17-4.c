#include <stdio.h>

struct profile{ char name[20]; double grade; int english; };

void input_data(struct profile *new_staff);
void elite(struct profile *new_staff);


int main()
{
    struct profile new_staff[5];

    input_data(new_staff);
    elite(new_staff);

    return 0;
}

void input_data(struct profile *ns)
{
    int i;

    printf("이름, 학점, 영어점수를 입력하세요.\n");

    for(i=0;i<5;i++){
        scanf("%s%lf%d", ns[i].name, &ns[i].grade, &ns[i].english);
    }
}

void elite(struct profile *new)
{
    int i;

    printf("\n");
    for(i=0;i<5;i++){
        if(new[i].grade>=4.0 && new[i].english>=900){
            printf("%s, %.1lf, %d\n", new[i].name, new[i].grade, new[i].english);
        }
    }
}
