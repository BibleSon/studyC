#include <stdio.h>
void menu_disp()
{
    printf("==========< 메뉴 >==========\n");
    printf("1. 덧셈(addition)\n");
    printf("2. 뺄셈(subtraction)\n");
    printf("3. 곱셈(multipication)\n");
    printf("4. 나눗셈(division)\n");
    printf(">> 원하는 메뉴를 선택하세요 : ");
}

int main()
{
    menu_disp();
    return 0;
}


