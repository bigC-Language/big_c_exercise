#include <stdio.h>
#include <malloc.h>
#include <string.h>
/*
 * 使用堆创建动态数组
 * 注意,除了堆,再没其他创建动态数组的方法
 * */
void printf_arr(int *arr,int n){
	int i =0;
	for(i=0;i<n;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int *arr = malloc(sizeof(int)*n);
	//memset(arr,0,sizeof(int)*n);
	int len = sizeof(int)*n/sizeof(int);
	printf_arr(arr,len);
	free(arr);
	return 0;
}
