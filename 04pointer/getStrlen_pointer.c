#include <stdio.h>
int getStrlen(char str[]);
/*
 * 使用指针获取字符串长度,不得使用数组下标
 * */
int main(){
	char str[] = "hello world!";
	int len = getStrlen(str);
	printf("%d\n",len);
	return 0;
}
int getStrlen(char str[]){
	char *p = str;
	int len = 0;
	while(*(p++))len++;
	return len;	
}
