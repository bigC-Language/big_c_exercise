#include <stdio.h>
#include <stdlib.h>
/*
 * 外置参数,编写一个计算器
 * */
int main(int param_count , char *params[]){
	if(param_count < 4 || param_count >4){
		printf("请输入正确的三个参数!");
		return 0;
	}
	int a = atoi(params[1]);
	int b = atoi(params[3]);
	switch(params[2][0]){//传进来的参数默认是字符串,而switch需要的是整型变量
		case '+':
			printf("%d\n",a+b);
		break;
		case '-':
			printf("%d\n",a-b);
		break;
		case '*':
			printf("%d\n",a*b);
		break;
		case '/':
			printf("%d\n",a/b);
		break;
		case '%':
			printf("%d\n",a%b);
		break;
	}
		printf("(%s)\n",params[2]);
		printf("(%d)\n",params[2][0]);
	return 0;
}
