#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ofp;
    ofp = fopen("b.txt","w");
    char str[100] = {0};    

    if(ofp == NULL){ printf("���� ���� ����"); return 1; }

    while(1){
        printf("�й��� �Է��ϼ��� : ");
        fgets(str,sizeof(str),stdin);
        if(atoi(str) < 0) {printf("(�Է� ����)"); break;}
        fputs(str,ofp);
        
        printf("�̸��� �Է��ϼ��� : ");
        fgets(str,sizeof(str),stdin);
        str[strlen(str)-1] = '\0';
        fputs(str,ofp);
        fputs(" ",ofp);

        printf("���̸� �Է��ϼ��� : ");
        fgets(str,sizeof(str),stdin);
        str[strlen(str)-1] = '\0';
        fputs(str,ofp);
        fputs(" ",ofp);
 
        printf("Ű�� �Է��ϼ��� : ");
        fgets(str,sizeof(str),stdin);
        fputs(str,ofp);
 
        printf("�ּҸ� �Է��ϼ��� : ");
        fgets(str,sizeof(str),stdin);
        fputs(str,ofp);
    }
    
    fclose(ofp);

    return 0;
}



