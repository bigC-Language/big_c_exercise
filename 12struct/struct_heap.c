#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
/*
 * 结构体中堆的使用
 * */
struct A{
	char a;
};
int main(){
	struct A *a = malloc(sizeof(struct A)*10);
	memset(a,0,sizeof(struct A)*10);
	a->a = 10;
	printf("%zu\n",sizeof(*a));
	printf("%d\n",a->a);
	free(a);//记得要释放
	return 0;
}
