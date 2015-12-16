#include <stdio.h>
/*
 * 内存四区
 * */
int a = 100;//静态区(静态变量和全局变量都在这里)
int b = 100;
int fun(){
	return 0;
}

int main(){
	int c = 100;//栈区
	int d = 100;
	static int e = 100;
	printf("%d,%d,%d,%d,%d\n%d\n%d\n",&a,&b,&c,&d,main,&e,fun);//main是代码区
	return 0;
}

