#include <stdio.h>
int main()
{
    char sex;
    int weight, height, y1, y2, y3, year;
    double bmi;

    printf("문자를 입력하세요 :");
    scanf("%c",&sex);

    if(sex == 'f'){
        printf("여자입니다.\n");
    }
    else if(sex == 'm'){
        printf("남자입니다.\n");
    }
    else {
        printf("잘못 입력하였습니다.\n");
    }

    printf("연도를 입력하세요 :");
    scanf("%d",&year);
    y1 = year%4;
    y2 = year%100;
    y3 = year%400;

    if((y1==0)&&(y2!=0)){
        printf("윤년입니다.\n");
    }
    else if((y1==0)&&(y2==0)&&(y3==0)){
        printf("윤년입니다.\n");
    }
    else {printf("평년입니다.\n"); }

    printf("성별을 입력하세요(m/f) :");
    scanf(" %c",&sex);
    printf("몸무게를 입력하세요(kg) :");
    scanf("%d",&weight);
    printf("키를 입력하세요(cm) :");
    scanf("%d",&height);
    bmi = weight/((height*0.01)*(height*0.01));
    printf("당신의 BMI는 : %.1lf입니다.\n",bmi);    
    if(sex == 'm'){
        if(bmi<20) { printf("저체중입니다."); }
        else if(bmi>=20&&bmi<25) { printf("표준체중입니다."); }
        else if(bmi>=25) { printf("과체중입니다."); }
    }
    else if(sex == 'f'){
        if(bmi<18.5) { printf("저체중입니다."); }
        else if(bmi>=18.5&&bmi<25) { printf("표준체중입니다."); }
        else if(bmi>=25) { printf("과체중입니다."); }
    }

    return 0;
}

