#include <stdio.h>

int main(void)
{
    int n;
    int i = 0;
    printf("����� �Է��ϼ��� : ");
    scanf("%d", &n);
    while(n--) {
        printf("*");
        i++;
        if (i % 5 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}

