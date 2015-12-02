#include <stdio.h>
#include <stdlib.h>
/*
 * 使用指针实现冒泡排序
 * */
void bubble(int arr[],int *p,int arr_len);//使用指针进行排序
void bubble_pointer(int arr[],int *p,int arr_len);
int getArrLen(int arr[]);//获取数组长度	
int main(){
	int arr[] = {112,33,22,55,321,2312,55,509,32,4324};
	int len = sizeof(arr)/sizeof(arr[0]);
	int new_len = getArrLen(arr);//****用指针来取有点问题,不知道为什么会多了1位,待研究****//
	printf("%d,%d\n",len,new_len);
	int new_arr[len];
	int *p = &new_arr[0];
	bubble_pointer(arr,p,len);
	int i = 0;
	for(i = 0;i<len;i++){
		printf("new_arr[%d] = %d\n",i,new_arr[i]);
	}
	return 0;
}
//用指针排序的方法
void bubble_pointer(int arr[],int *p,int arr_len){
	int i,j,tmp = 0;
	int *p_arr = &arr[0];
	for(i = 0;i<arr_len;i++){
		for(j = 0;j<i;j++){
			if(*(p_arr+i) < *(p_arr+j)){
				tmp = *(p_arr+i);
				*(p_arr+i) = *(p_arr+j);
				*(p_arr+j) = tmp;
			}
		}
	}
	for(i = 0;i<arr_len;i++){
		*(p+i) = *(p_arr+i);
	}
	return;
}
//原始的数组排序法
void bubble(int arr[],int *p,int arr_len){
	int i,j,tmp = 0;
	for(i=0;i<arr_len;i++){
		for(j=0;j<i;j++){
			if(arr[i]<arr[j]){
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for(i = 0;i<arr_len;i++){
		*(p+i) = arr[i];
	}
	return;
}
int getArrLen(int arr[]){
	int new_len = 0;
	int *p = &arr[0];
	while(*p){
		p++;
		new_len++;
	}
	return new_len;
}
