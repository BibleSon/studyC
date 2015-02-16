#include <stdio.h>

struct cracker {int price; int calories;};

int main()
{
    struct cracker crk;
    printf("바사삭의 가격과 열량을 입력하세요 : ");
    scanf("%d%d",&crk.price,&crk.calories);
    printf("바사삭의 가격 : %d원\n바사삭의 열량 : %dkcal",crk.price,crk.calories);

    return 0;
}
