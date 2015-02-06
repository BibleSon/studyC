#include <stdio.h>

int main()
{
    double num[5];
    double res;
    int i;

    printf("다섯 개의 숫자를 입력하세요 : ");
    
    for(i=0;i<5;i++){
        scanf("%lf",&num[i]);     
    }

    res = num[0];

    for(i=1;i<5;i++){
        if(res >= num[i]){ res = res; }
        else if( res <= num[i]){ res = num[i]; }
    }

    printf("가장 큰 값은 : %lf입니다.",res);
    return 0;
}
   
