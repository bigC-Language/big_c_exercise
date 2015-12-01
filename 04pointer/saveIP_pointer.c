#include <stdio.h>
/**
 * 使用指针对ip地址进行存储
 * */
int main(){
	int a = 0;
	unsigned char *p = &a;//这个地方会报错
	*p = 192;
	p++;
	*p = 168;
	p++;
	*p = 3;
	p++;
	*p = 242;
	p = &a;//还有这里
	printf("%u.%u.%u.%u\n",*p,*(p+1),*(p+2),*(p+3));
	return 0;
}
