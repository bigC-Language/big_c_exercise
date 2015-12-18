#include <stdio.h>
/*
 * 体验结构体的内存对齐
 * */
struct A{
	char d;
	char c;
	int a;
	char b;
};
struct B{
	char a[100];//会对折成100/8+1
	long long b;//到此处总内存数:((100/8+1)+1)*8 = 112
	int c;
};
struct C{
	char a;
	short b;
	int c;
	short d;
	char e;
};
int main(){
	struct C res;
	printf("%zu\n",sizeof(res));
	return 0;
}
