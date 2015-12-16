#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
/*
 * 堆区
 * 体验malloc,创建堆的理解
 * */
int * geta(){
	int *arr2 = malloc(sizeof(int) * 10);
	return arr2;
}
int main(){
	int *p = geta();//可以返回一个堆变量地址,但是不能返回一个栈的变量地址~
	printf("%p\n",p);
	free(p);
	return 0;
	/*
	int *arr = (int *)malloc(1024);
	memset(arr,0,1024);
	int i = 0;
	for(i=0;i<10;i++){
		printf("%d\n",arr[i]);
	}
	free(arr);
	return 0;
	*/
}
