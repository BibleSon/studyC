#include <stdio.h>
#include <string.h>

int main()
{
    int tmp1, tmp2, len, m, i, n;
    char string[10000];

    scanf("%d",&n);

    while(n--){
        scanf("%s",string);
        len = strlen(string);
        while(len>2){
            for(i=0;i<len-2;i+=2){
                if(((int)string[i]>(int)string[i+2])){
                            tmp1 = string[i];
                            tmp2 = string[i+1];
                            string[i] = string[i+2];
                            string[i+1] = string[i+3];
                            string[i+2] = tmp1;
                            string[i+3] = tmp2;
                }
                else if(((int)string[i]==(int)string[i+2])&&((int)string[i+1]>(int)string[i+3])){
                    tmp1 = string[i];
                    tmp2 = string[i+1];
                    string[i] = string[i+2];
                    string[i+1] = string[i+3];
                    string[i+2] = tmp1;
                    string[i+3] = tmp2;
                }
            }
            len = len -2;
            }
        printf("%s\n",string);
    }
        return 0;
}

                            
                           
                          

