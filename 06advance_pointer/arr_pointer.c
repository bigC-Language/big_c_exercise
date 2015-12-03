#include <stdio.h>
/*
 * 通过指针访问数组成员
 * 三种数组的取值方式
 * */
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int *p = arr;
	printf("%zu,%zu\n",sizeof(p),sizeof(arr));//获取指针和数组的大小
	printf("%d,%d,%d\n",arr[0],arr[1],arr[2]);//最原始的数组取值方式
	printf("%d,%d,%d\n",*p,*(p+1),*(p+2));//可以用这种方式得到数组元素的值
	printf("%d,%d,%d\n",p[0],p[1],p[2]);//也可以用这种方式得到数组元素的值
	int i = 0;
	int len = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<len;i++){
		printf("p[%d] = %d\n",i,p[i]);
	}
	printf("---------\n");
	//数组的赋值方式
	arr[2] = 20;
	
	*(p+4) = 40;
	
	p[6] = 60;
	
	p+=8;//注意,这种赋值之后指针已经发生偏移,直接从第八位开始
	*p = 80;
	
	for(i=0;i<len;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	
	int b = 100000;
	int *pp = &b;
		printf("%d,%d,%d\n",pp[0],pp[1],pp[2]);
	return 0;
}
