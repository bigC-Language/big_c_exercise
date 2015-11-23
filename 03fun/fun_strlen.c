#include <stdio.h>
#include <stdlib.h>
/*
 * 获取字符串长度
 * */
 int getStrlen_normal(char str[]);
 int getStrlen_fun(char str[],int n);
int main(){
	char str[] = "hello world";
	int len1 = getStrlen_normal(str);
	printf("normal_len = %d\n",len1);

	int len2 = getStrlen_fun(str,0);
	printf("function_len = %d\n",len2);
	return 0;
}
//普通法
int getStrlen_normal(char str[]){
	int len = 0;
	while(str[len++]);
	len--;
	return len;
}
//递归法
int getStrlen_fun(char str[],int n){
	if(n==5)exit(0);//程序退出
	if(str[n]){
		printf("%d\n",n);
		return getStrlen_fun(str,n+1);
	}else{
		return n;
	}
}
