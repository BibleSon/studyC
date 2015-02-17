#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ofp;
    ofp = fopen("b.txt","w");
    char str[100] = {0};    

    if(ofp == NULL){ printf("파일 개방 실패"); return 1; }

    while(1){
        printf("학번을 입력하세요 : ");
        fgets(str,sizeof(str),stdin);
        if(atoi(str) < 0) {printf("(입력 종료)"); break;}
        fputs(str,ofp);
        
        printf("이름을 입력하세요 : ");
        fgets(str,sizeof(str),stdin);
        str[strlen(str)-1] = '\0';
        fputs(str,ofp);
        fputs(" ",ofp);

        printf("나이를 입력하세요 : ");
        fgets(str,sizeof(str),stdin);
        str[strlen(str)-1] = '\0';
        fputs(str,ofp);
        fputs(" ",ofp);
 
        printf("키를 입력하세요 : ");
        fgets(str,sizeof(str),stdin);
        fputs(str,ofp);
 
        printf("주소를 입력하세요 : ");
        fgets(str,sizeof(str),stdin);
        fputs(str,ofp);
    }
    
    fclose(ofp);

    return 0;
}



