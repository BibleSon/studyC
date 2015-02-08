#include <stdio.h>
#include <string.h>

int main()
{
    char name[20] = {0};
    char number[50] = {0};
    char address[100] = {0};
    char res[1000] = {0};

    printf("이름을 입력하세요 : ");
    gets(name);
    strcat(res,name);
    strcat(res,", ");

    printf("전화번호를 입력하세요 : ");
    gets(number);
    strcat(res,number);
    strcat(res,", ");

    printf("주소를 입력하세요 : ");
    gets(address);
    strcat(res,address);

    puts(res);

    return 0;
}



