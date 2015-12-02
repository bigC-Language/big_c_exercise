#include <stdio.h>
#include <stdlib.h>
/*
 * 使用指针获取数组中的最大值和最小值
 * */
int getMaxFromArr(int arr[]);//获取最大值
int getMinFromArr(int arr[]);//获取最小值
int getArrLen(int arr[]);//获取数组长度	
int main(){
	int arr[] = {12,221,3,4,5,63,7,8,9,10,33255,444};
	/*
	 * 获取数组长度
	 * 需要特别注意的是,数组传进函数后,传进去的是指针,如果用这个方法,只能得到指针的大小
	 * */
	int len = sizeof(arr)/sizeof(arr[0]);
	int new_len = getArrLen(arr);
	printf("%d,%d\n",len,new_len);
	int max = getMaxFromArr(arr);
	int min = getMinFromArr(arr);
	printf("max = %d , min = %d\n",max,min);
	return 0;
}
int getMaxFromArr(int arr[]){
	int max = 0;
	int i = 0;
	//int len = sizeof(arr)/sizeof(arr[0]);//在这里这么用只能获得数组指针的大小
	int new_len = getArrLen(arr);
	for(i=0;i<new_len;i++){
		if(arr[i]>max)max = arr[i];
	}
	return max;
}
int getMinFromArr(int arr[]){
	int min = arr[0];//得到数组第一个数得知
	int i = 0;
	int new_len = getArrLen(arr);//获取数组长度
	//遍历数组,通过判断得到最小值
	for(i=0;i<new_len;i++){
		if(arr[i]<min)min = arr[i];
	}
	return min;
}
int getArrLen(int arr[]){
	int new_len = 0;
	int *p = &arr[0];
	while(*(p++))new_len++;
	return new_len;
}
