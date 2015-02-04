#include <stdio.h>

int main(void)
{
    int i, m, res;

    for(i=1;i<=9;i++){
        printf("\n");
        
        for(m=2;m<=8;m+=3){
            res = i * m;
            printf("  %d * %d = %2d",m,i,res);
        }
    }
    return 0;
}
