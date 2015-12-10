#include <stdio.h>
#include "../fun/base.c"
int main(int argc , char * args[]){
	printf("该main一个有%d个参数\n",argc);
	int i = 0;
	for(i=0;i<argc;i++){
		printf("第%d个参数是:%s\n",i,args[i]);
	}
	return 0;
}
