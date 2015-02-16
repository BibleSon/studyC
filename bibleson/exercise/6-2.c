#include <stdio.h>
int main()
{
    int age;

    printf("나이를 입력하세요 :");
    scanf("%d",&age);

    if(age>6&&age<70){
        printf("입장료는 3000원입니다.");
    }
    else if(age<=6||age>=70){
        printf("무료입장입니다.");
    }

    return 0;
}
