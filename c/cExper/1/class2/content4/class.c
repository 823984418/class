#include <stdio.h>
int main(void)//int main(int argc, char *argv[])
{
    char a,b,c;
    scanf("%c%c%c",&a,&b,&c);
    char i;
    i = a;
    a = c;
    c = i;
    printf("%c%c%c\n",a,b,c);
	return 0;
}
