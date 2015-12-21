#include <stdio.h>
#include <string.h>
/*
 * 体验结构体嵌套
 * */
struct A{
	char a;
};
struct B{
	struct A a;//相当于把A的内容挪进来,位对齐一致
	int c;
	char str[100];
};
int main(){
	struct B b = {{33},2,""};
	strcpy(b.str,"world");
	printf("%zu\n",sizeof(b));
	printf("%d,%d,%s\n",b.a.a,b.c,b.str);//注意取的写法
	struct B bb = {{22},3,"hello"};
	//进行结构体赋值,相当于把内存复制过去
	b = bb;
	printf("%d,%d,%s\n",b.a.a,b.c,b.str);
	return 0;
}
