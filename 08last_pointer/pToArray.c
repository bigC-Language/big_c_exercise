#include <stdio.h>
//指向函数的指针应用x
int add(int a,int b);
int max(int a,int b);
int main(){
	int status = 0;
	int (*p)(int,int);
	scanf("%d",&status);
	//通过输入的值的不同,执行不同的函数
	if(status == 1){
		p = add;
	}else{
		p = max;
	}
	printf("%d\n",p(111,2222));
	return 0;
}
int add(int a,int b){
	return a+b;
}
int max(int a,int b){
	return a>b?a:b;
}
