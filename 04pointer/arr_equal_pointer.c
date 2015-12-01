#include <stdio.h>
/**
 * 使用指针对数组进行赋值操作
 * */
int main(){
	char arr[10] = {0};
	char *p = &arr[0];//取得数组的首地址，注意，写成&arr会报错，虽然两者得到的结果是一样的
	int i;
	for(i = 0;i<10;i++){
		*p = i;
		p++;
	}
	for(i = 0;i<10;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	return 0;
}
