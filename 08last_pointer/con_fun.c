#include <stdio.h>
#include <string.h>
/*
 * 内存操作函数,memset,memcpy,memmove
 * */
void printf_arr(int *arr,int n);//打印数组

 int main(){
	 //1,memset,把数组置空
	int arr[5] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("用memset之前\n");
	printf_arr(arr,n);
	printf("----------------\n");
	printf("用memset之后\n");
	memset(arr,0,sizeof(arr));
	printf_arr(arr,n);
	printf("----------------\n");
	printf("针对字符串:\n");
	char str1[] = "saaaaaaa";
	memset(str1,0,sizeof(str1));
	printf("(%s)\n",str1);
	printf("----------------\n");
	//2,memcpy,把数组的值赋给另一个数组
	int arr1[5] = {1,2,3,4,5};
	int arr2[5];
	memcpy(arr2,arr1,12);
	printf("使用memcpy之后,arr2的值:\n");
	printf_arr(arr2,n);
	printf("----------\n");
	int arr_1[5] = {1,2,3,4,5};
	int arr_2[5];
	memmove(arr_2,arr_1,sizeof(arr_2));
	printf("使用memmove之后,arr_2的值:\n");
	printf_arr(arr_2,n);
	return 0;
}

void printf_arr(int *arr,int n){
	int i = 0;
	for(i=0;i<n;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
}
