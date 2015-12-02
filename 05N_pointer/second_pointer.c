#include <stdio.h>
#include <stdlib.h>
/*
 * 使用指针,不排序的情况下，求数组中第二大的元素
 * */
int second_max(int arr[]);
int getStrlen(int arr[]);
int main(){
	int arr[] = {1112,2221,3,324,5,26,7,83,9,10};
	int s_max = second_max(arr);
	printf("%d\n",s_max);
	return 0;
}
int second_max(int arr[]){
	int len = getStrlen(arr);
	int *p = &arr[0];
	/* 用这个方法的效率不好,需要进行两次循环,实际上1次循环足够*/
	/*
	int max = 0;//最大值
	int second_max = 0;//第二大的值
	int i = 0;
	for(i=0;i<len;i++){
		if(*(p+i) > max){
			max = *(p+i);
		}
	}
	for(i=0;i<len;i++){
		if((*(p+i)<max)&&(*(p+i)>second_max)){
			second_max = *(p+i);
		}
	}
	* */
	/*优化方案*/
	int max = arr[0];
	int second_max = arr[1];
	int i = 0;
	for(i=0;i<len;i++){
		if(*(p+i)>max){
			//当前值比最大值都大,赋当前值给最大值,同时原本的最大值降级成第二大的值
			second_max = max;
			max = *(p+i);
		}else if(*(p+i)<max&&*(p+i)>second_max){
			second_max = *(p+i);
		}
	}
	return second_max;
}
int getStrlen(int arr[]){
	int len = 0;
	int *p = &arr[0];
	while(*(p++))len++;
	return len;
}
