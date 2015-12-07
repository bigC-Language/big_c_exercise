#include <stdio.h>
void npp(int *n);
void swap(int *n1,int *n2);//交换两个参数的值
int main(){
	int i = 100;
	npp(&i);
	printf("%d\n",i);
	printf("--------");
	int a = 10,b = 20;
	swap(&a,&b);
	printf("a = %d,b = %d\n",a,b);
	return 0;
}
void npp(int *n){
	(*n)++;
}
/*
 * 交换传进来的参数的值
 * */
void swap(int *n1,int *n2){
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

