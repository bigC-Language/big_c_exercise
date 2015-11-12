#include <stdio.h>
#include <stdlib.h>
void strChange();
void chineseChange();
int main(){
	strChange();
	chineseChange();
	return 0;
}
/*
 * 字符串逆置
 * */
void strChange(){
	char str[100] = "hello a0pp0le";
	//求字符串长度
	int len = 0;
	while(str[len++]);//从0开始，如果有效，则为有长，否则为0
	int min = 0;
	int max = len-1;
	char tmp;
	while(min<max){
		tmp = str[min];
		str[min] = str[max-1];
		str[max-1] = tmp;
		max--;
		min++;
	}
	printf("%s\n",str);
}
/*
 * 汉字逆置
 * */
void chineseChange(){
	char str[100] = "你好世界";
	//求字符串长度
	int len = 0;
	while(str[len++]);//从0开始，如果有效，则为有长，否则为0
	printf("%d\n",len);
	
	int min = 0;
	int max = len-2;//去掉0
	char tmp;
	while(min<max){
		//注意，交换的位置，是min+2换max
		tmp = str[min+2];
		str[min+2] = str[max];
		str[max] = tmp;
		
		tmp = str[min+1];
		str[min+1] = str[max-1];
		str[max-1] = tmp;
		
		tmp = str[min];
		str[min] = str[max-2];
		str[max-2] = tmp;
		max-=3;
		min+=3;
	}
	printf("(%s)\n",str);

}


