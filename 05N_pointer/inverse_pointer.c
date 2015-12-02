#include <stdio.h>
#include <stdlib.h>
/*
 * 使用指针进行数组的逆置处理
 * */
void inverse_pointer(int arr[],int *p,int len);
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int len = sizeof(arr)/sizeof(arr[0]);
	int new_arr[len];
	int *p = &new_arr[0];
	inverse_pointer(arr,p,len);
	int i = 0;
	for(i = 0;i<len;i++){
		printf("new_arr[%d] = %d\n",i,new_arr[i]);
	}
	return 0;
}
void inverse_pointer(int arr[],int *p,int len){
	int *arr_p = &arr[0];
	int i,tmp = 0;
	for(i=0;i<len/2;i++){
		tmp = *(arr_p+i);
		*(arr_p+i) = *(arr_p+len-1-i);
		*(arr_p+len-1-i) = tmp;
	}
	for(i = 0;i<len;i++){
		*(p+i) = *(arr_p+i);
	}
	return;
}
