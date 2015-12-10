#include <stdio.h>
//打印整型数组
void printf_int_arr(int *arr,int n){
	int i;
	for(i=0;i<n;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
}
//获取字符串长度
int getStrlen(char *str){
	int len = 0;
	while(*(str++))len++;
	return len;
}
