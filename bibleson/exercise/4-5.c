#include <stdio.h>

int main()
{
    int ff, cm, distance, speed, hour, min;
    double cc, inch, sec;

    printf("화씨 온도를 입력하세요 :");
    scanf("%d",&ff);
    
    cc = (ff-32)*5/9.0;

    printf("섭씨 온도는 %.1lf도입니다.\n센티미터 길이를 입력하세요 :",cc);
    scanf("%d",&cm);

    inch = cm/2.54;

    printf("인치로 계산하면 %.1lf인치입니다.\n거리와 속력을 입력하세요 :",inch);
    scanf("%d%d",&distance,&speed);

    hour = distance/speed;
    min = ((distance%speed)*1000)/((int)speed*1000/60);
    sec = ((distance%speed)*1000.0)/(speed*1000.0/60)*60 - min*60;


    printf("걸리는 시간은 : %d시간, %d분, %.3lf초입니다.",hour, min, sec);

    return 0;
}

