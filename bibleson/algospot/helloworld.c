#include <stdio.h>

int main()
{
	int number;
	int i = 0;
	char name[100];
	
	scanf("%d,",&number);

	while (i<number) {
		scanf("%s", name);
		printf("Hello, %s!\n",name);
		i = i+1;
		}
	
	return 0;
}

