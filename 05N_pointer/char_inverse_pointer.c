#include <stdio.h>
#include <stdlib.h>
/*
 * 字符串的逆置
 * */
int getStrlen(char str[]);
void inverse_pointer(char str[]);
int main(){
	char str[] = "hello world!";
	inverse_pointer(str);
	printf("%s\n",str);
	return 0;
}
void inverse_pointer(char str[]){
	char *s_p = str;
	int i,tmp = 0;
	int len = getStrlen(str);
	for(i = 0;i<len/2;i++){
		tmp = *(s_p+i);
		*(s_p+i) = *(s_p+len-i-1);
		*(s_p+len-i-1) = tmp;
	}
	return;
}
int getStrlen(char str[]){
	char *p = str;
	int len = 0;
	while(*(p++))len++;
	return len;
}
