#include <stdio.h>
int main(void)
{
	int n;
	int x1, y1, x2, y2, x3, y3;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d%d", &x1, &y1);
		scanf("%d%d", &x2, &y2);
		scanf("%d%d", &x3, &y3);
		if (x1 != x2) {
			if (x1 == x3) {
				x3 = x2;
			} else {
				x3 = x1;
			}
		}

		if (y1 != y2) {
			if (y1 == y3) {
				y3 = y2;
			} else {
				y3 = y1;
			}
		}
		
		printf("%d %d\n", x3, y3);
	}
	return 0;
}

