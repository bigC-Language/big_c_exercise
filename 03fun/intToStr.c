#include <stdio.h>

void intToStr(int i);
char *strInverse(char str[]);
int getStrlen(char str[]);

int main(){
	int a;
	scanf("%d",&a);
	intToStr(a);
	return 0;
}
/*
 * 设计一个函数，把输入的int型数字转化成字符串
 * */
void intToStr(int i){
	//以一个3位的数作为测试
	/*
	 //取得个位
	int i_ge = i%10;
	printf("%d\n",i_ge);
	//取得十位
	i = i/10;
	int i_shi = i%10;
	printf("%d\n",i_shi);
	//取得百位
	i = i/10;
	int i_bai = i%10;
	printf("%d\n",i_bai);
	* */
	//把上述方案进行进一步优化
	int p = 0;
	int n = 0;
	char arr[10] = {0};
	while(i){
		p = i%10;
		arr[n] = p+'0';//把得到的数字放入每一个格子
		n++;
		i = i/10;
	}
	//注意，这时候得到的字符串是一个倒序的字符串
	//字符串逆置
	char *str = strInverse(arr);
	printf("%s\n",str);
}
/*
 * 字符串逆置
 * */
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
