#include <stdio.h>
int main(void)//int main(int argc, char *argv[])
{
	int a,b;
	a = 123;b = 456;
	int sum = a + b;//error: sum = a + b;
	printf("sum is %d\n",sum);
	return 0;
}
