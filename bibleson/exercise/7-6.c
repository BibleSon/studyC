#include <stdio.h>
int main(void)
{
    int gram, num;
    num = 0;

    while(1)
    {
        printf("계란의 무게를 입력하세요(단위 : g) : ");
        scanf("%d",&gram);
        
        if(gram<300) continue;
        else if(gram>=300){
            num = num +1;
            if(num == 30) break;
            printf("현재 왕계란의 수 : %d\n", num);
        }
    }
    printf("계란 한 판을 모두 담았습니다!");
    return 0;
}

