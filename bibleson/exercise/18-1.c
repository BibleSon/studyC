#include <stdio.h>

int main()
{
    int i = 0;
    char ch, temp1='0', temp2='0';
    FILE *fp;
    fp = fopen("a.txt","r");

    if(fp==NULL){
        printf("파일이 없습니다.");
        return 1;
    }
    
    while(1){
        ch = fgetc(fp);
        if(ch == EOF) break;
        putchar(ch);
        temp2 = temp1;
        temp1 = ch;
        if((temp2 == '.')&&(temp1 == ' ')){ putchar('\n'); i++; }
        if(i == 3){ putchar('\n'); i=0; }
    }

    fclose(fp);

    return 0;
}

