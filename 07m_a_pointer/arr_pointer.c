#include <stdio.h>
void print_arr(int arr[],int len);//打印一维数组的值
void arr_argument(int arr[]);//数组在函数中值的变化
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int len = sizeof(arr)/sizeof(arr[0]);
	arr_argument(arr);
	print_arr(arr,len);
	return 0;
}
void print_arr(int arr[],int len){
	int i = 0;
	for(i=0;i<len;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
}
//void arr_arugment(int arr[])
void arr_argument(int *arr){//传进函数内的是指针,函数内部的数组操作其实是数组的指针的操作
	arr[1] = 200;
	arr[2] = 300;
}
