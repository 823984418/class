#include <stdio.h>
int max(int x, int y); //int max(int,int);
int main(void)		   //int main(int argc, char *argv[])
{
	int a, b, c, d;
	printf("请输入a,b,c:\n");
	scanf("%d,%d,%d", &a, &b, &c);
	d = max(a, b);
	d = max(c, d);
	printf("最大值是:%d\n", d);
	return 0;
}
int max(int x, int y)
{
	int z;
	if (x > y)
		z = x;
	else
		z = y;
	return z;
}
