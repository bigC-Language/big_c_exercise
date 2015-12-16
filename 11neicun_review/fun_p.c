#include <stdio.h>
#include <malloc.h>
/*
 * 正确的函数内部地址返回方式 ,没能很好理解,先记忆
 * */
void getheap(int **p){
	*p = malloc(sizeof(int)*10);
}
int main(){
	int *p = NULL;
	getheap(&p);
	printf("%p\n",p);
	free(p);
	return 0;
}
