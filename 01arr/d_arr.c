#include <stdio.h>
/*
 * 求二维数组的行列和
 * */
int main01(){
	int arr[2][3] = {{1,2,3},{3,4,5}};
	int i,j;
	int sum=0;
	for(i = 0;i<2;i++){
		for(j=0;j<3;j++){
			sum +=arr[i][j];
		}
	}
	printf("%d\n",sum);
	return 0;
}

/*
 * 冒泡排序
 * */
int main(){
	int arr[10] = {111,2,3,224,5,556,7,8,222,333};
	int i,j,tmp;
	for(i = 0;i<10;i++){
		for(j=0;j<i;j++){
			if(arr[i]<arr[j]){
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for(i = 0;i<10;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
