#include <stdio.h>
int main()
{
    int code, watt, grade;
    double num1, num2, num;
    char alu;
    double fee;

    printf("학년을 입력하세요 :");
    scanf("%d",&grade);

    switch(grade){
        case 1:
            printf("등록금은 130만원입니다.\n");
            break;
        case 2:
            printf("등록금은 100만원입니다.\n");
            break;
        case 3:
            printf("등록금은 100만원입니다.\n");
            break;
        case 4:
            printf("등록금은 110만원입니다.\n");
            break;
        default:
            printf("학년을 잘못 입력하였습니다.\n");
            break;
    }

    printf("수식을 입력하세요 :");
    scanf("%lf%c%lf",&num1,&alu,&num2);

    switch(alu){
        case '+':
            num = num1 + num2;
            printf("연산결과는 %.2lf입니다.\n",num);
            break;
        case '-':
            num = num1 - num2;
            printf("연산결과는 %.2lf입니다.\n",num);
            break;
        case '*':
            num = num1 * num2;
            printf("연산결과는 %.2lf입니다.\n",num);
            break;
        case '/':
            num = num1 / num2;
            printf("연산결과는 %.2lf입니다.\n",num);
            break;
        default:
            printf("없는 연산기호입니다.\n");
            break;
    }

    printf("코드번호를 입력하세요(1가정용, 2산업용, 3교육용) :");
    scanf("%d",&code);
    printf("전기 사용량을 입력하세요(kw) :");
    scanf("%d",&watt);

    switch(code){
        case 1:
            fee = (1130 + (watt*127.8)) * 1.09;
            printf("전기요금은 %.0lf원입니다.", fee);
            break;
        case 2:
            fee = (660 + (watt*88.5)) *1.08;
            printf("전기요금은 %.0lf원입니다.", fee);
            break;
        case 3:
            fee = (370 + (watt*52.0)) * 1.05;
            printf("전기요금은 %.0lf원입니다.", fee);
            break;
        default:
            printf("없는 코드입니다.");
            break;
    }
    return 0;
}
