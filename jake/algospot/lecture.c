#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
    return strncmp((char *)a, (char *)b, 2);
}

int main(void)
{
    int t;
    char str[1000+1];
    char buf[2 + 1];
    int i, j;
    int len;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", str);
        len = strlen(str);    
        qsort(str, len/2, 2, comp);
        /*
        for(i = 0; i < len/2; i++)
        {
            for(j = i + 1; j < len/2; j++)
            {
                if(strncmp(&str[i*2], &str[j*2], 2) > 0) {
                    buf[0] = str[i*2];
                    buf[1] = str[i*2+1];
                    str[i*2] = str[j*2];
                    str[i*2+1] = str[j*2+1];
                    str[j*2] = buf[0];
                    str[j*2+1] = buf[1];
                }
            }
        }*/
        printf("%s\n", str);
    }
    return 0;
}
