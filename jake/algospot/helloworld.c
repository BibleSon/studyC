#include <stdio.h>
int main(void)
{
	int n;
	char name[100];
	scanf("%d", &n);
	while(n--) {
		scanf("%s", name);
		printf("Hello, %s!\n", name);
	}
	return 0;
}
