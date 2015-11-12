#include <stdio.h>
void ltrim();
void rtrim();
int main(){
	ltrim();
	rtrim();
	return 0;
}

/*
 * 去掉字符串左侧空格
 * */
void ltrim(){
	char str[] = "         hello world";
	printf("去除空格前[%s]\n",str);
	int len = 0;
	while(str[len++]);
	int i,j = 0;
	//从左往右读，注意，从右往左读是右问题的，遇到空格的时候怎么办？
	//同理，去掉右边的空格也应该从右往左读
	for(i=0;i<len-1;i++){
		if(str[i] != ' '){
			break;
		}
	}
	for(j = i;j<len;j++){
		str[j-i] = str[j];
	}
	printf("去除空格后[%s]\n",str);
}
/*
 * 去掉字符串右边的空格
 * */
void rtrim(){
	char str[] = "hello world         ";
	printf("去除空格前[%s]\n",str);
	int len = 0;
	while(str[len++]);
	len--;
	int i = 0;
	for(i = len-1;i>0;i--){
		if(str[i] != ' '){
			str[i+1] = 0;
			break;
		}
	}
	printf("去除空格后[%s]",str);
}
