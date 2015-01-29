#include <stdio.h>
int main(void)
{
	int t;
	unsigned int n;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%u", &n);
		n = ((n>>24)&0xFF) + (((n>>16)&0xFF)<<8) + (((n>>8)&0xFF)<<16) + ((n&0xFF)<<24);
		printf("%u\n", n);
	}
	return 0;
}
