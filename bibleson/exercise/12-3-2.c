#include <stdio.h>

int user_strlen(char *);

int main()
{
    char str1[80] = "Long time no see.";
    char str2[80] = "What's up?";

    if(user_strlen(str1) > user_strlen(str2)){ printf("%s",str1); }
    else { printf("%s",str2); }

    return 0;
}

int user_strlen(char *str)
{
    int count = 0;

    while(*str != '\0'){
        count++;
        str++;
    }
     
    return count;
}
