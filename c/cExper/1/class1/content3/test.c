#include<stdio.h>
int max(int x,int y);//int max(int,int);
int main(void)//int main(int argc, char *argv[])
{
	int a,b,c,d;
	printf("������a,b,c:\n");
	scanf("%d,%d,%d",&a,&b,&c);
	d = max(a,b);
	d = max(c,d);
	printf("���ֵ��:%d\n",d);
	return 0;
}
int max(int x,int y)
{
	int z;
	if(x > y) z = x;
	else z = y;
	return z;
}
