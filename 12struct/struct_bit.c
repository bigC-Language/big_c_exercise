#include <stdio.h>
/*
 * 结构体位的体验
 * */
struct Test{
	int a : 12;
	int b : 2;
	int c : 2;
	int d : 32;
	int f;
};
struct A{
	int a : 2;
	int b : 4;
	int c : 4;
	//int d :100;//如果超出了最大int范围,会编译失败,int最大范围是32位
};
int main(){
	struct A a;
	a.a = 3;//补码是11
	a.b = 12;//补码是1100
	a.c = 16;//补码是10000,截取后是0000,所以结果为0
	printf("%d,%d,%d\n",a.a,a.b,a.c);
	struct Test test;
	//test.a =3;//
	//printf("%d\n",test.a);
	test.a = 1;
	test.b = 0;
	test.c = 1;
	test.d = 1;
	test.f = 1;
	printf("test.a=%d,test.b=%d,test.c=%d,test.f=%d,test.d=%d\n",test.a,test.b,test.c,test.d,test.f);
	printf("%zu\n",sizeof(test));
	return 0;
}
