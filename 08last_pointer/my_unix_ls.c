#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 参考linux中的ls函数,编写ls的功能
 * */
int main(int args_count,char*params[]){
	if(args_count<2){
		printf("请至少输入1个参数");
		return  0;
	}
	if(args_count>3){
		printf("只能输入1个或2个参数");
		return 0;
	}
	char str[0];
	if(args_count >= 2){
		strcat(str,params[1]);
	}
	if(args_count >=3){
		strcat(str," ");
		strcat(str,params[2]);
	}
	system(str);
	return 0;
}

