#include <stdio.h>
/*
 * 指向函数的指针
 * */
int add(int a,int b);
int main(){
	printf("1+2 = %d\n",add(1,2));
	printf("-------------------\n");
	int (*p)(int ,int) = add;//定义一个指针,它指向函数
	printf("%p\n",p);
	printf("-------------------\n");
	printf("指针函数,1+2 = %d\n",p(1,2));
	return 0;
}
int add(int a, int b){
	return a+b;
}
