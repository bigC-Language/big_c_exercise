#include <stdio.h>
/*
 * 使用指针求二维数组的和,平均值,每行的平均值,没列的平均值
 * */
int main(){
	int arr[2][3] = {{1,2,3},{4,5,6}};
	int (*p)[3] = arr;
	int i=0,j=0,sum=0;
	int sum_h=0;
	for(i=0;i<2;i++){
		sum_h = 0;
		for(j=0;j<3;j++){
			sum+=p[i][j];
			sum_h += p[i][j];
		}
		printf("%d,%d\n",sum_h,sum_h/3);//每一行的和与平均值
	}
	int avg = sum/6;
	printf("sum=%d,avg=%d\n",sum,avg);
	return 0;
	//Q:怎么求没一列的和?
}
