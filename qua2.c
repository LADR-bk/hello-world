#include<stdio.h>
int max(int x, int y, int z)
{
	int n;
	if (x > y && x > z)n = x;
	else if (y > z && y > x)n = y;
	else n = z;
	return n;
}
int main()
{
	int a, b, c, big;
	scanf_s("%d %d %d", &a, &b, &c);
	big = max(a, b, c);
	printf("a=%d\t b=%d\t c=%d\n", a, b, c);
	printf("最大值为：%d\n",big);
	return 0;
}