#include <stdio.h>
/*
 * 在函数内使用堆的方法
 * */
void getheap1(int **p){
	*p = malloc(sizeof(int)*10);
}
int main(){
	int *p = NULL;
	printf("%p\n",&p);
	getheap1(&p);
	printf("%p\n",p);
	return 0;
}
