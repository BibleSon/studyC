#include <stdio.h>

int main()
{
    int star, num;
    star = 1;

    printf("����� �Է��ϼ��� :");
    scanf("%d",&num);

    while(star<=num)
    {
        printf("*");
        star = ++star;
    }
    return 0;
}
