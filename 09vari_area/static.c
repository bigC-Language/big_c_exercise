#include <stdio.h>
#include "params.h"
#include "params.c"
extern int s;
/*体验静态变量*/
void mystatic1();
void mystatic2();
int main(){
	printf("%d\n",s);
	printf("%d\n",pi);
	int i;
	for(i=0;i<10;i++){
		mystatic1();
	}
	printf("--------------------\n");
	for(i=0;i<10;i++){
		mystatic2();
	}
	return 0;
}

//使用普通的定义变量方式
//此时,无论外部循环多少次,i的值都会被重新赋值,不变
void mystatic1(){
	int i = 1;
	printf("n_i = %d\n",i);
	i++;
}

//使用静态变量定义方式
//i只会被进行一次赋值,循环的时候会进行++操作
void mystatic2(){
	static int i = 1;
	printf("s_i = %d\n",i);
	i++;
}
