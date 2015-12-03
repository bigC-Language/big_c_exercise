#include <stdio.h>
/*
 * 指向指针的指针
 * */
int main(){
	int a = 100;
	int *p = &a;
	int **pp = &p;//定义一个二级指针,指向一个指针的地址
	//二级指针用两个**表示,同理,3级指针用***,而且指向的只能是二级指针的地址
	int ***ppp = &pp;
	***ppp = 200;
	printf("%d,%p\n",***ppp,ppp);
	printf("%d,%p\n",**pp,pp);
	printf("%d,%p\n",*p,p);
	printf("%d,%p\n",a,&a);
	return 0;
}
