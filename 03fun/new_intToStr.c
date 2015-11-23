#include <stdio.h>
char *intToStr(int i);
char *strInverse(char str[]);
int getStrlen(char str[]);
/*
 * 设计一个函数，把输入的int型数字转化成字符串
 * */
int main(){
	int a;
	scanf("%d",&a);
	char *str = intToStr(a);
	//printf("%s\n",str);
	//printf("(%s)\n",str);
	printf("bbb%s\n",str);
	return 0;
}
char *intToStr(int i){
	int p = 0;
	int n = 0;
	char arr[10] = {0};
	while(i){
		p = i%10;
		arr[n] = p+'0';//把得到的数字放入每一个格子
		n++;
		i = i/10;
	}
	char *str = strInverse(arr);
	//printf("%s\n",str);
	//printf("(%s)\n",str);
	printf("aaa%s\n",str);
	return str;
}
char *strInverse(char str[]){//设置可用返回字符串的函数
	int len = getStrlen(str);
	int i = 0;
	int tmp = 0;
	for(i = 0;i<len;i++){
		tmp = str[i];
		str[i] = str[len-1];
		str[len-1] = tmp;
		len--;
	}
	return str;
}
int getStrlen(char str[]){
	int len = 0;
	while(str[len++]);
	len--;
	return len;
}
