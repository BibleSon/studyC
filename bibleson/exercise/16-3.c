#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i = 0;

    if(strcmp(argv[0],"string_print") != 0){
        printf("프로그램 사용법 오류입니다.\n사용법 : string_print 문자열 반복 횟수");
    }
    else if(strcmp(argv[1], "\0") == 0){
        printf("프로그램 사용법 오류입니다.\n사용법 : string_print 문자열 반복 횟수");
    }
    else if(strcmp(argv[2], "\0") == 0){
        printf("프로그램 사용법 오류입니다.\n사용법 : string_print 문자열 반복 횟수");
    }
    else{
        while(i<atoi(argv[2])){
        printf("%s\n",argv[1]);
        }
    }
    return 0;
}
