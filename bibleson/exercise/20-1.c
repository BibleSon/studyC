#include <stdio.h>

int main()
{
    int num, i;
    unsigned int n, res;

    printf("�������� �Է��ϼ��� : ");
    scanf("%d",&num);

    n = (unsigned int) num;

    for(i=0;i<=31;i++){
        res = (n << i) >> 31;
        printf("%u",res);
        if(i%4 == 3){ printf(" "); }
    }

    return 0;
}
