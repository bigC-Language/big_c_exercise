#include <stdio.h>
#include "../fun/base.c"
int main(){
	int arr[5] = {1,2,3,4,5};
	int len = sizeof(arr)/sizeof(int);
	printf_int_arr(arr,len);
	return 0;
}
