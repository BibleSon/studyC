#include <stdio.h>
#include <string.h>

int main()
{
    char str1[80] = "Long time no see.";
    char str2[80] = "What's up?";
    int len1, len2;

    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 > len2){ printf("%s",str1); }
    else { printf("%s",str2); }

    return 0;
}
