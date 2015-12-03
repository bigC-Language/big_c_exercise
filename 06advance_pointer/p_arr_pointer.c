#include <stdio.h>
/*
 * 指针数组
 * 注意,属于一种新类型,指针的数组
 * */
int main(){
	int *p[5];//定义一个指针数组
	//数组大小,单个数组指针大小,单个数组指针的整型值大小
	printf("%zu,%zu,%zu\n",sizeof(p),sizeof(p[0]),sizeof(*p[0]));
	int a=10,b = 10;//int a,b=10;这样的定义是错误的
	printf("%d,%d\n",a,b);
	p[0] = &a;
	p[1] = &b;
	//注意,p[0],p[1]这时候虽然是一副数组元素的样子,但实际上他们是一个指针
	printf("%d,%d\n",*p[0],*p[1]);
	return 0;
}
