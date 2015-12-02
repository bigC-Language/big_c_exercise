#include <stdio.h>
#include <stdlib.h>
/*
 * 实验,指针之间的差集
 * 差集就是指针之间的距离
 * */
int main(){
	int arr[10] = {1,2,3};
	int  *p1 = &arr[0];
	int  *p2 = &arr[100];
	int dif = p2-p1;
	printf("%d\n",dif);
	printf("---------\n");
	char str[] = "hello world!";
	int *n_p1 = &str[0];
	int *n_p2 = &str[5];
	printf("%d\n",n_p2-n_p1);
	return 0;
}
