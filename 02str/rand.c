#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * 随机数的使用
 * */
void myRand();
int main(){
	myRand();
	return 0;
}
void myRand(){
	//获取时间戳
	//time_t tm = time(NULL);
	int mytime = (int)time(NULL);
	int i,myrand;
	srand(mytime);
	for(i=0;i<10;i++){
	myrand = rand();
	printf("%d\n",myrand);
	}
}
