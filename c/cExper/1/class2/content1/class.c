#include <stdio.h>
int main(void)//int main(int argc, char *argv[])
{
    char a,b;
    int c;
	scanf("%c%c%d",&a,&b,&c);
	printf("%c,%c,%d\n",a,b,c);
	return 0;
}

//1. 要显示1,2,34 输入 12 34
//2. 要显示1 2 34 应该#7 printf("%c %c %d\n",a,b,c); 修改第七行，把字符串中的,改为空格
//3. 要输入1,2,34 应该#6 scanf("%c,%c,%d",&a,&b,&c); 修改第六行，插入,
//4. 要输入1,2,34，输出'1','2',34 在3的基础上 #7 printf("\'%c\',\'%c\',%d\n",a,b,c);
//5. #7 printf("%d,%d,%d\n",a,b,c); 会变化 输出49,50,34因为'1' -> 49 '2' -> 50
