#include <stdio.h>

int main(void)
{
    unsigned int age;
    unsigned int t;
    printf("몇 살까지 살고 싶습니까? ");
    scanf("%u", &age);

    printf("%u일, %u시간, %u분, %u초입니다.\n", age * 365, age * 365 * 24, age * 365 * 24 * 60, age * 365 * 24 * 60 * 60);
    return 0;
}

