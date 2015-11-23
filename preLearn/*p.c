#include <stdio.h>
int main(){
	int a = 100;
	//定义一个指针，定义完后，p就是一个指针地址，*p是指向指针的值
	int *p ;
	/* * * * * * * * * * * * * * * * * *
	 * 首先，指针必须是地址，不能是数据
	 * 当像刚刚那样定义了之后，只能存放地址，p = a这样是错误的
	 * * * * * * * * * * * * * * * */
	p = &a;//赋值的时候需要赋给他地址
	printf("p = %p\n",p);
	printf("-----------------\n");
	 a = 30;
	int b = 20;
	//指针需要初始化
int *p1 = &a;
int *p2 = &b;
int c = 0;
int *temp;
temp  = &c;
*temp=*p1; 
*p1=*p2;
*p2=*temp;
printf("%d,%d\n",*p1,*p2);
	
	return 0;
}
