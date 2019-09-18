#include <stdio.h>
#include <stdlib.h>

/**
 * 代表一个实际长度会变化字符串数组
 */
typedef struct{
	int length;
} *StringArray;

/**
 * 得到字符串数组
 */
char **data(StringArray array){
	return (char **)&(((int *)array)[1]);
}

/**
 * 以指定长度构造数组
 */
StringArray newArray(int length){
	if(length <= 0){
		return NULL;
	}
	StringArray array = (StringArray)malloc(sizeof(int) + length*sizeof(char*));
	if(array != NULL){
		array->length = length;
		char **a = data(array);
		int i;
		for(i = 0;i != length;i++){
			a[i] = NULL;
		} 
	}
	return array;
}

/**
 * 初始化数组某个元素
 */
char *init(StringArray array,int i,int size){
	return data(array)[i] = (char *)malloc((size + 1)*sizeof(char *));
}

/**
 * 设置数组的值，此操作完成复制
 */
char *set(StringArray array,int i,char *str){
	char *s = init(array,i,strlen(str));
	strcpy(s,str);
}

/**
 * 释放数组的内容和其本身 
 */
void freeArray(StringArray array){
	char **d = data(array);
	int i,l = array->length;
	for(i = 0;i != l;i++){
		char *p = d[i];
		if(p != NULL){
			free(p);
		}
	}
	free(array);
}

#define COUNT 30
#define MAX_SIZE 50

int main(int argc,char *argv[]){
	StringArray array = newArray(COUNT);
	if(array == NULL){
		printf("Error:malloc NULL");
	}
	printf("Input %d lines:\n",COUNT);
	int i;
	for(i = 0;i != COUNT;i++){
		init(array,i,MAX_SIZE);
		scanf("%s",data(array)[i]);
	}
	for(i = 0;i != COUNT;i++){
		printf("%s\n",data(array)[i]);
	}
	freeArray(array);
	return 0;
}
