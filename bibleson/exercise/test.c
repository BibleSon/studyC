#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int count;

    if(argc<3){
        printf("���α׷� ���� �����Դϴ�.\n");
        printf("���� : string_print ���ڿ� �ݺ�Ƚ��\n");
        return 0;
    }
    count = atoi(argv[2]);
    for(i=0;i<count;i++){
        printf("%s\n",argv[1]);
    }
    return 0;
}
