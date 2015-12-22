#include <stdio.h>
#include <malloc.h>
/*
 * 理解联合体的作用
 * */
union test{
	char a;
	char b;
};
union test2{
	char d;
	char *p;
};
//理解共用一段内存
int main(){
	union test t;
	t.a = 1;
	t.b = 2;
	printf("%d,%d\n",t.a,t.b);
	printf("--------\n");
	union test2 tt;
	tt.p = malloc(100);
	tt.p = 5;
	printf("%d\n",tt.p);
	free(tt.p);
	return 0;
}
