#include <stdio.h>

int main(void)
{
    int i;
    char str1[] = "There is no royal road to learning.";
    char str2[80];
  
    for (i = 0; i < 100000; i++)
    {
        str2[i] = str1[i];
        if (str1[i] == '\0')
            break;
    }

    printf("복사된 문자열 : %s\n", str2);
    return 0;
}

