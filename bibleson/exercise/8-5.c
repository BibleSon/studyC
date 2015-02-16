#include <stdio.h>
int menu_disp()
{
    int num;
    printf("==========< ¸Ş´º >==========\n");
    printf("1. µ¡¼À(addition)\n");
    printf("2. »¬¼À(subtraction)\n");
    printf("3. °ö¼À(multipication)\n");
    printf("4. ³ª´°¼À(division)\n");
    printf(">> ¿øÇÏ´Â ¸Ş´º¸¦ ¼±ÅÃÇÏ¼¼¿ä : ");
    scanf("%d",&num);
    return num;
}

double add(double num1, double num2)
{
    double res;
    res = num1 + num2;
    return res;
}

double sub(double num1, double num2)
{
    double res;
    res = num1 - num2;
    return res;
}

double mul(double num1, double num2)
{
    double res;
    res = num1 * num2;
    return res;
}

double div(double num1, double num2)
{
    double res;
    res = num1 / num2;
    return res;
}

int main()
{
    int num;
    double num1, num2, res;

    num = menu_disp();
    printf("µÎ °³ÀÇ ¼ıÀÚ¸¦ ÀÔ·ÂÇÏ¼¼¿ä : ");
    scanf("%lf%lf",&num1,&num2);

    switch(num){
        case 1: res = add(num1, num2);
                break;
        case 2: res = sub(num1, num2);
                break;
        case 3: res = mul(num1, num2);
                break;
        case 4: res = div(num1, num2);
                break;
    }
    printf("°á°ú°ªÀº %lfÀÔ´Ï´Ù.",res);
    return 0;
}
