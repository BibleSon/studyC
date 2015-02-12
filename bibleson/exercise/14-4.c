#include <stdio.h>
#include <string.h>

int main()
{
    char *animal[5] = {"dog", "elephant", "monkey", "rabbit", "tiger"};
    int i;
    char res[10];

    strcpy(res, "dog");

    for(i=0;i<4;i++){
        if(strlen(res) >= strlen(animal[i+1])){ strcpy(res,res); }
        else if(strlen(res) < strlen(animal[i+1])){ strcpy(res,animal[i+1]); }
    }

    printf("가장 이름이 긴 동물은 : %s",res);

    return 0;
}


