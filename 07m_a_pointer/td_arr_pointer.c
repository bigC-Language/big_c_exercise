#include <stdio.h>
/*
 * 探究二维数组在函数中的传递
 * */
void print_2arr(int (*arr)[5],const int width,const int height);//打印二维数组
/*
 * 二维数组传进函数内部的时候,内层大小要与传进去的大小一致,不方便,慎用!
 * */
int main(){
	int arr[2][5] = {{1,2,3},{4,5,6}};
	/**
	 * 二维数组分三层,外,中,内
	 * width = 外层/中层 //行大小
	 * height = 中层/内层 //列大小
	 */
	int width = sizeof(arr)/sizeof(arr[0]);
	int height = sizeof(arr[0])/sizeof(arr[0][0]);
	print_2arr(arr,width,height);
	return 0;
}
//void print_2arr(int arr[][5],const int width,const int height)//等效
void print_2arr(int (*arr)[5],const int width,const int height){
	int i = 0,j = 0;
	for(i=0;i<width;i++){
		for(j=0;j<height;j++){
			printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
		}
	}
}
