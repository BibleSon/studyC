#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i = 0;

    if(argc < 3){
        printf("���α׷� ���� �����Դϴ�.\n���� : string_print ���ڿ� �ݺ� Ƚ��");
    }
    else{
        while(i<atoi(argv[2])){
            printf("%s\n",argv[1]);
            i++;
        }
    }
    return 0;
}
