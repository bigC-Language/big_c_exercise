#include <stdio.h>
#include <stdlib.h>
/*
 * 合并两个字符串
 * 实际函数strcat(char str1[],const char str2[]);
 * */
void mystrcat(char *str1,const char *str2);
int main(){
	char str1[] = "afsdafdbc";
	char str2[] = "efdsfsafg";
	mystrcat(str1,str2);
	printf("%s\n",str1);
	return 0;
}
//把字符串str2合并到字符串str1
void mystrcat(char *str1,const char *str2){
	while(*(str1++));
	str1--;
	*str1 = *str2;
	str1++;
	while(*(str2++)){
		*str1 = *str2;
		str1++;
	}
}
