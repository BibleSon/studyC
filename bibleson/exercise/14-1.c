#include <stdio.h>

int main()
{
    int ary1[4][5] = {0};
    int ary2[4][5] = {0};
    int i, j;
    int k = 1;

    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            ary1[i][j] = k;
            k++;
        }
    }

    k = 1;

    for(j=0;j<5;j++){
        for(i=0;i<4;i++){
            ary2[i][j] = k;
            k++;
        }
    }

    printf("행우선 순서로 저장된 배열\n");
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("%5d",ary1[i][j]);
        }
        printf("\n");
    }

    printf("\n열우선 순서로 저장된 배열\n");
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("%5d",ary2[i][j]);
        }
        printf("\n");
    }

    return 0;
}


