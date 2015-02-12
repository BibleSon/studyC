#include <stdio.h>

int main()
{
    int ary[5][6] = {{1,2,3,4,5,0},{6,7,8,9,10,0},{11,12,13,14,15,0},{16,17,18,19,20,0},{0,0,0,0,0,0}};
    int i, j;
    int temp = 0;

    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            temp += ary[i][j]; 
        }
        ary[i][j] = temp;
        temp = 0;
    }

   for(j=0;j<5;j++){
        for(i=0;i<4;i++){
            temp += ary[i][j];
        }
        ary[i][j] = temp;
        temp = 0;
    }

   for(i=0;i<4;i++){
        temp += ary[i][5];
    }
    ary[4][5] = temp;

    
    for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            printf("%5d",ary[i][j]);
        }
        printf("\n");
    }

    return 0;
}
