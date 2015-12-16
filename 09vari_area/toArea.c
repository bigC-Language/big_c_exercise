#include <stdio.h>
#include "params.c"
extern int c;//这有啥用,好像有没有都一样...
/*
 * 理解作用域
 * */
int b = 500;//全局变量,在整个文件里面都有效 
 
int main(){
	int a = 100;
	{
		int a = 200;
		printf("%d\n",a);//此处输出的是200
	}
	printf("%d\n",a);//此处输出的是100
	
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	return 0;
}
