#include <stdio.h>
/*
 * 体验内存在递归中的使用
 * */
//先设置一个递归的函数
void degree(int n){
	if(n==0){
		printf("%p\n",&n);
	}else{
		printf("%p\n",&n);
		degree(n-1);
		printf("%p\n",&n);
	}
	
}
int main(){
	degree(10);
	return 0;
}
