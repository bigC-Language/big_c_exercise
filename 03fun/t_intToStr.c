#include <stdio.h>

void intToStr(char * str,int i);
void strInverse(char *str1,char str[]);
int getStrlen(char str[]);
/*
 * 设计一个函数，把输入的int型数字转化成字符串
 * */
int main(){
	int a;
	scanf("%d",&a);
	char ss[]={'\0'};
//	memset(ss,0x00,128);
	printf("(%s)\n",ss);
	intToStr(ss,a);
	printf("(%s)\n",ss);
	return 0;
}
void intToStr(char * str,int i){
	int p = 0;
	int n = 0;
	char arr[10] = {0};
	while(i){
		p = i%10;
		arr[n] = p+'0';//把得到的数字放入每一个格子
		n++;
		i = i/10;
	}

	strInverse(str,arr);
	return;
}
void strInverse(char *str1,char str[]){//设置可用返回字符串的函数
	int len = getStrlen(str);
	int i = 0;
	int tmp = 0;
	for(i = 0;i<len;i++){
		tmp = str[i];
		str[i] = str[len-1];
		str[len-1] = tmp;
		len--;
	}
	len = getStrlen(str);
	for (i=0;i<len;i++)
	{
		str1[i]=str[i];
	}
	return ;
}
int getStrlen(char str[]){
	int len = 0;
	while(str[len++]);
	len--;
	return len;
}

