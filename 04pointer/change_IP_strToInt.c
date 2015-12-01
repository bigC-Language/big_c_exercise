#include <stdio.h>
/**
 * 把字符串ip转化成整型
 * */
int main(){
	char ip[] = "196.168.3.222";
	int a[4] = {0};
	int *p = &a[0];
	//先通过sscanf函数把值取出来，放进数组里面
	sscanf(ip,"%d.%d.%d.%d",p,p+1,p+2,p+3);
	printf("%d.%d.%d.%d\n",*p,*(p+1),*(p+2),*(p+3));
	return 0;
}
