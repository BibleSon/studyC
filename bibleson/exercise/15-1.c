#include <stdio.h>

void str_prn(char **, int);

int main()
{
    char *ptr_ary[] = {"eagle", "tiger", "lion", "squirrel"};
    int count;

    count = sizeof(ptr_ary)/sizeof(ptr_ary[0]);

    str_prn(ptr_ary, count);

    return 0;
}

void str_prn(char **pa, int ct)
{
    int i;

    for(i=0;i<ct;i++){
        printf("%s\n",pa[i]);
    }
}


