#include <stdio.h>
#include <stdlib.h>
/*
 * 设置函数mystrstr,在某个字符串中查找相关的子串
 * */
char * mystrstr(char *str1 ,char *str2);
int mystrlen(char *str);
int main(){
	char *str1 = "hello world";
	char *str2 = "el";
	printf("%s",mystrstr(str1,str2));
	return 0;
}
char * mystrstr(char *str1 ,char *str2){
	int len = mystrlen(str2);
	int i =  0;
	while(*(str1++)){
		if(str1[0]==str2[0]){
			int status = 0;
			for(i = 0;i<len;i++){
				if(str1[i] != str2[i]){
					status = 1;
				}
			}
			if(status == 0){
				return str1;
			}
		}
	}
	return NULL;
}
int mystrlen(char *str){
	int len = 0;
	while(*(str++)){
		len++;
	}
	return len;
}
