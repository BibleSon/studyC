#include <stdio.h>
int main(void)
{
	int t = 32767;
	int h, m, s;
	h = (t / 60) / 60;
	m = (t / 60) % 60;
	s = t % 60;
	printf("%d�ʴ� %d�ð�, %d��, %d���Դϴ�.\n", t, h, m, s);
	return 0;
}

