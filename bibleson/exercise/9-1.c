#include <stdio.h>

int main()
{
    double num[5];
    double res;
    int i;

    printf("�ټ� ���� ���ڸ� �Է��ϼ��� : ");

    for(i=0;i<5;i++){
        scanf("%lf",&num[i]);     
    }

    res = num[0];

    for(i=1;i<5;i++){
        if(res >= num[i]){ res = res; }
        else if( res <= num[i]){ res = num[i]; }
    }

    printf("���� ū ���� : %lf�Դϴ�.",res);
    return 0;
}
