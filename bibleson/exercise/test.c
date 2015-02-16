#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int count;

    if(argc<3){
        printf("프로그램 사용법 오류입니다.\n");
        printf("사용법 : string_print 문자열 반복횟수\n");
        return 0;
    }
    count = atoi(argv[2]);
    for(i=0;i<count;i++){
        printf("%s\n",argv[1]);
    }
    return 0;
}
