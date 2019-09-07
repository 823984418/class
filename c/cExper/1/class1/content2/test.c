#include <stdio.h>
int main(void)//int main(int argc, char *argv[])
{
	int a,b;
	printf("a=");
	scanf("%d",&a);//int scanf(char const*,...)
	printf("b=");
	scanf("%d",&b);
	int diff = a - b;
	printf("a-b=%d\n",diff);
	return 0;
}
