#include <stdio.h>
#include <malloc.h>
#include "../fun/base.c"
/*
 * 体验calloc,realloc,他们与malloc的区别
 * */
int main(){
	int *arr = calloc(10,sizeof(int));//在ubuntu操作系统下,malloc和calloc没什么区别...
	int n = sizeof(int)*10/sizeof(int);
	int i;
	for(i=0;i<n;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	
	printf("------------------\n");
	/*realloc分三种情况
	* 1,长度大于原值长度
	* 2,长度小于原值长度
	* 3,值为NULL,注意,不是长度为NULL
	* */
	//1长度大于原值长度
	int *p = malloc(10);
	int *n_p = realloc(p,15);
	int size = 15/4;
	printf_int_arr(n_p,size);
	//2长度小于原值长度
	int *nn_p = realloc(p,5);
	printf_int_arr(nn_p,size);
	//值为NULL,.相当于使用了malloc
	int *nnn_p = realloc(NULL,5);
	printf_int_arr(nnn_p,size);
	return 0;
}
