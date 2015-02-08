#include <stdio.h>

int main()
{
    char *str = "watermelon";
    
    while(*str != '\0'){
        printf("%c",*str);
        str=str+2;
    }
    return 0;
}
