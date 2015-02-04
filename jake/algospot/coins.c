#include <stdio.h>

int v;
int n;
int coins[100 + 1];
long int cnt[5000 + 1];
void input()
{
    int i;
    scanf("%d%d", &v, &n);
    for (i = 0; i < n; i++)
        scanf("%d", &coins[i]);

    for (i = 0; i < 5000 + 1; i++)
        cnt[i] = 0;
    cnt[0] = 1;
}

void process()
{
    int i;
    int j;
    int k;
    for (i = 0; i < n; i++)
    {
        for (j = coins[0]; j <= v + coins[0]; j += coins[0])
        {
            if (j - coins[i] < 0)
                continue;
            cnt[j] += cnt[j - coins[i]];
        }
    }
}

void output()
{
    printf("%ld\n", cnt[v] % 1000000007);
}


int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        input();
        process();
        output();
    }

    return 0;
}

