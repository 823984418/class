#include<stdio.h>
int max(int x,int y);//int max(int,int);
int main(void)//int main(int argc, char *argv[])
{
	int a,b,c;
	printf("������a��b:\n");
	scanf("%d,%d",&a,&b);
	c = max(a,b);
	printf("���ֵ��:%d\n",c);
	return 0;
}
int max(int x,int y)
{
	int z;
	if(x > y) z = x;
	else z = y;
	return z;
}
