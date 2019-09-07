#include <stdio.h>
int main(void)//int main(int argc, char *argv[])
{
    int a,b;

    printf("a=");
    scanf("%d",&a);
    
    printf("b=");
    scanf("%d",&b);

    int i;
    i = a;
    a = b;
    b = i;

    printf("a=%d\n",a);
    printf("b=%d\n",b);
    
	return 0;
}
