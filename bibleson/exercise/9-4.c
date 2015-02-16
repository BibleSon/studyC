#include <stdio.h>

int main()
{
    char str1[] = "There is no royal road to learning.";
    char str2[80];

    int m, i, cnt;
    cnt = 0;

    m = sizeof(str1)/sizeof(str1[0]);

    for(i=0;i<m;i++){
        if(str1[i] == '\0') break;
        cnt = cnt +1;
    }

    for(i=0;i<cnt;i++){
        str2[i] = str1[i];
    }
    str2[cnt] = '\0';

    printf("복사된 문자열 : %s", str2);

    return 0;
}
