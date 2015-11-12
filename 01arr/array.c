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
 int main04(){
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
  * 方法1：从左往右靠
  * */
int main05(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i,tmp;
	for(i = 0;i<5;i++){
		tmp = arr[i];
		arr[i] = arr[9-i];
		arr[9-i] = tmp;
	}
	for(i = 0; i<10;i++){
			printf("i = %d,v = %d\n",i,arr[i]);
	}
	return 0;
}
/*
 * 数组逆置
 * 方法2：从两边往中间靠
 * */
 int main06(){
		int arr[10] = {1,2,3,4,5,6,7,8,9,10};
		int i,tmp;
		int min = 0;
		int max = 9;
		while(min<max){
			tmp = arr[min];
			arr[min] = arr[max];
			arr[max] = tmp;
			min++;
			max--;
		}
		for(i=0;i<10;i++){
				printf("i = %d,v = %d\n",i,arr[i]);
		}
		return 0;
}
/*
 * 求水仙花数
 * 一个n>3的数，每个位上的数的位数次方等于该数本身
 * 如153 = 1*1*1+5*5*5+3*3*3 = 1+125+27 = 126+27 = 153
 * 如370 = 3*3*3+7*7*7+0 = 27+49*7 = 27+343 = 370
 * */
int main07(){
	int i;
	for(i = 100; i<1000;i++){
		int bai = i/100;
		int shi = i/10%10;//直接砍掉个位
		//int shi = (i-i%10)/10%10;
		int ge = i%10;
		if(bai*bai*bai+shi*shi*shi+ge*ge*ge == i){
			printf("%d%d%d\n",bai,shi,ge);
		}
	}
	return 0;
}
/*
 * 求数组中所有奇数的和
 * */
int main08(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	int sum=0;
	for(i=0;i<10;i++){
			if(arr[i]%2!=0){
				sum+=arr[i];
			}
	}
	printf("sum=%d\n",sum);
	return 0;
}
  /*
   * 求素数
   * */
int main(){
	int i,j,status;
	for(i=0;i<1000;i++){
			status = 0;
			for(j=2;j<i;j++){
				if(i%j==0){
					status = 1;
				}
			}
			if(status == 0){
				printf("%d\n",i);
			}
	}
	return 0;
}
