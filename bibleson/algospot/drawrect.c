#include <stdio.h>

int main()
{
	int n;
	int dot1x, dot1y, dot2x, dot2y, dot3x, dot3y, dot4x, dot4y;

	scanf("%d",&n);

	while(n--){
		scanf("%d%d%d%d%d%d",&dot1x, &dot1y, &dot2x, &dot2y, &dot3x, &dot3y);

		if(dot1x == dot2x) {dot4x = dot3x;}
		else if(dot1x == dot3x) {dot4x = dot2x;}
		else if(dot2x == dot3x) {dot4x = dot1x;}
		
		if(dot1y == dot2y) {dot4y = dot3y;}
		else if(dot1y == dot3y) {dot4y = dot2y;}
		else if(dot2y == dot3y) {dot4y = dot1y;}

		printf("%d %d\n",dot4x, dot4y);
		}
	return 0;
}
		

