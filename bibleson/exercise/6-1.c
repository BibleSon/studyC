#include <stdio.h>
int main()
{
    int num, abs;

    printf("�������� �Է��ϼ��� :");
    scanf("%d", &num);

    if(num<0) { abs = num*(-1); }
    else if(num>=0) { abs = num; } 

    printf("���밪�� %d�Դϴ�.",abs);

    return 0;
}
