#include <stdio.h>
int main01(){
	printf("hello world\n");
	return 0;	
}
/*
 * 求数组种最大元素的值
 * */
int main02(){
	int arr[10] = {1,43214,3,4,5,6,22,321,666,1};
	int i;
	int max=0;
	for(i=0;i<10;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		printf("k=%d,v=%d\n",i,arr[i]);
	}
	printf("max=%d\n",max);
	return 0;
}
/*
 * 求最小值和他的下标
 * */
int main03(){
		int arr[10] = {882,993,543,6,4,321,3,5,7,10};
		int i;
		int min=arr[0];
		int index = 0;
		for(i=0;i<10;i++){
				if(min>arr[i]){
					min = arr[i];
					index = i;
				}
		}
		printf("min = %d,index = %d\n",min,index);
		return 0;
}
/*
 * 求数组内元素和
 * */
 int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i,sum = 0;
	for(i = 0;i<10;i++){
		sum += arr[i];
	}
	printf("sum=%d\n",sum);
	return 0;
 }
 
 /*
  * 数组逆置
  * */
int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	for(i = 0;i<10;i++){
		
	}
}
  
