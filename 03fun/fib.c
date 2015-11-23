#include <stdio.h>
/*
 * 递归求斐波那契数列
 * 第0项是0，第1项是1，然后从第二项开始的值是前两项的和
 * */
int fib(int n);
int main(){
	int a;
	int res,i;
	scanf("%d",&a);
	for(i = 0;i<a;i++){
		res = fib(i);
		if(i == a-1){
			printf("%d\n",res);
		}else{
			printf("%d,",res);
		}
	}
	return 0;
}
int fib(int n){
	int res;
	if(n == 0){
		res = 0;
	}else if(n == 1){
		res = 1;
	}else{
		res = fib(n-1)+fib(n-2);
	}
	return res;
}
