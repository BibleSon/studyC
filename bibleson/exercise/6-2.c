#include <stdio.h>
int main()
{
    int age;

    printf("���̸� �Է��ϼ��� :");
    scanf("%d",&age);

    if(age>6&&age<70){
        printf("������ 3000���Դϴ�.");
    }
    else if(age<=6||age>=70){
        printf("���������Դϴ�.");
    }

    return 0;
}
