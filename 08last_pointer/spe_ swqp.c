#include <stdio.h>
/*
 * 交换两个数的值
 * */
void swap(int *a , int *b);
void spe_swap(int *a,int *b);
int main(){
	int a= 10;
	int b = 20;
	spe_swap(&a,&b);
	printf("%d,%d\n",a,b);
	return 0;
}
void swap(int *a,int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void spe_swap(int *a,int *b){
	*a += *b; //*a = 30;
	*b = *a - *b; //*b = 30-20 = 10;
	*a = *a - *b; //*a = 30-10 = 20;
	//此时,*a = 20,*b = 10;已经形成交换
}
