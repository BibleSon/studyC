#include <stdio.h>

int main()
{
	int n, a, b, c, d;
	unsigned int number, result;

	scanf("%d",&n);

	while(n--) {
		scanf("%u",&number);
		
		a = (number & 0xFF000000) >> 24;
		b = (number & 0x00FF0000) >> 8;
		c = (number & 0x0000FF00) << 8;
		d = (number & 0x000000FF) << 24;

		result = a|b|c|d;

		printf("%u\n",result);
		}
	return 0;
}

		
