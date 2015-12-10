#include <stdio.h>
//指向函数的指针,调用方案
int add(int a,int b);
int max(int a,int b);
int getfun( int (*p)(int,int),int a,int b);
int main(){
	int i = getfun(max,1,2);
	printf("%d\n",i);
	return 0;
}
int add(int a,int b){
	return a+b;
}
int max(int a,int b){
	return a>b?a:b;
}
int getfun( int (*p)(int,int),int a,int b){
	return p(a,b);
}
