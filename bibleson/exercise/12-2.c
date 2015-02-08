#include <stdio.h>
#include <string.h>

void swap_string(char *, char *);

int main()
{
    char str1[20] = "apple";
    char str2[20] = "banana";

    swap_string(str1, str2);

    printf("str1 : %s\nstr2 : %s",str1,str2);

    return 0;
}

void swap_string(char *str1, char *str2)
{
    char temp[20];

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}


