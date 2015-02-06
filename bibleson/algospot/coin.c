#include <stdio.h>
#include <string.h>

int i, n, y, m, coin, won, num;
int money[100] = {0};
long long don[100000] = {0};

void input()
{
    scanf("%d%d",&won,&num);
    
    for(m=0;m<num;m++)
    {
        scanf("%d",&coin);
        money[m] = coin;
    }
    memset(don, 0, sizeof(don));
}

void process()
{ 
    don[0] = 1;
    for(m=0;m<num;m++){
            i = money[m];
        for(n=0;n<=won;n++){
            y = n-i;
            if(y>=0){
                don[n] = don[n] + don[y];
            }
        }
   }
}

void output()
{
    printf("%lld\n",don[won]%1000000007);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        input();
        process();
        output();
    }
    return 0;
}
