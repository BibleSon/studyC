#include <stdio.h>
#include <string.h>

int main()
{
    char season[100] = {0};
    char flower[100] = {0};

    printf("계절명을 입력하세요 : ");
    scanf("%s", season);
    
    if (strcmp(season, "봄") == 0){ strcpy(flower,"개나리"); }
    else if (strcmp(season, "여름") == 0){ strcpy(flower,"장미"); }
    else if (strcmp(season, "가을") == 0){ strcpy(flower,"국화"); }
    else if (strcmp(season, "겨울") == 0){ strcpy(flower,"매화"); }
    else { strcpy(flower,"계절명을 잘못 입력하였습니다. >"); }

    printf("%s",flower);

    return 0;
}
