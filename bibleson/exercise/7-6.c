#include <stdio.h>
int main(void)
{
    int gram, num;
    num = 0;

    while(1)
    {
        printf("����� ���Ը� �Է��ϼ���(���� : g) : ");
        scanf("%d",&gram);

        if(gram<300) continue;
        else if(gram>=300){
            num = num +1;
            if(num == 30) break;
            printf("���� �հ���� �� : %d\n", num);
        }
    }
    printf("��� �� ���� ��� ��ҽ��ϴ�!");
    return 0;
}
