#include <stdio.h>
int nature_sum(int n);
int main(){
	int a;
	scanf("%d",&a);
	printf("%d\n",nature_sum(a));
	return 0;
}
/*
 //普通法
int nature_sum(int n){
	int sum = 0;
	int i = 0;
	for(i = n;i>=0;i--){
		sum += i;
	}
	return sum;
}*/
//递归法
int nature_sum(int n){
	if(n == 1){
		return 1;
	}else{
		return nature_sum(n-1)+n;
	}
}
