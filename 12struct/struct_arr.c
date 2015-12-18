#include <stdio.h>
/*
 * 体验结构体与数组
 * */
struct A{
	char a;
	char b;
	char c;
};
struct B{
	char a;
	int b;
};
int main(){
	struct A a;
	char *p = &a;//指向结构体a的首地址
	p[0] = 10;
	p[1] = 11;
	p[2] = 12;
	printf("%d,%d,%d\n",a.a,a.b,a.c);
	printf("-------------\n");
	struct B b;
	char *pp = &b;
	*pp = 100;
	pp++;
	*pp = 5;
	printf("%d,%d\n",b.a,b.b);
	
	return 0;
}
