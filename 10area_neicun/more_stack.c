#include <stdio.h>
/*
 * 栈溢出
 * */
int * geta(){
	int a = 100;
	return &a;
}
int main(){
	char str[1000*1000*1000] = {0};
	str[0] = 'a';
	//printf("%s\n",str);
	//执行程序,因为字符串数组太大,会程序崩溃
	int *p = geta();//执行程序,同样会崩溃
	//printf("%p",p);
	return 0;
}


