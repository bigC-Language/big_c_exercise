#include <stdio.h>
int main(){
	//数组指针练习
	char buf[5]  = {1,2,3,4,'5'};
	//printf("%p\n",&buf[1]);
	char *p = &buf;
	printf("%p , %p , %p , %p\n",buf,&buf[0],&buf[1],&buf[2]);
	printf("%d , %d , %d , %d\n",*p,*(p+4),*(p+2),*(p+3));
	//printf("*p=%d,*(p+1)=%d,*(p+2)=%d,*(p+3)=%d,*(p+4)=%d\n",*p,*(p+1),*(p+2),*(p+3),*(p+4));
	return 0;
}
