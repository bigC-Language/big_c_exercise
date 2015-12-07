#include <stdio.h>
/*
 * 指针作为返回值
 * 模拟函数:strchr(str,'a');
 * */
char *mystrchr(char *s,char c);
int main(){
	char str[] = "hello world";
	char *str1 = mystrchr(str,'s');//因为返回的是一个指针,所以接收的也应该是一个指针,不能用字符数组来接收,如:char str1[]
	printf("%s\n",str1);
	return 0;
}
char *mystrchr(char *s,char c){
	while(*(s++)){
		if(*s == c){
			return s;
		}
	}
	return "NULL";
}
