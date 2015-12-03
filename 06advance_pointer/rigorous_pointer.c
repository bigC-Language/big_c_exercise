#include <stdio.h>
#include <stdlib.h>
/*
 * 探索c语言常量指针的严谨性
 * */
int main(){
	int a = 100;
	const int *p = &a;
	//*p = 200;//用这种方法是无法改变a的值
	//但是
	int *p1 = &a;
	*p1 = 200;
	//用另外的指针变量来存储a的值却是可用改变的
	printf("%d\n",a);
	printf("------------\n");
	//再例如
	const int abc = 10; 
	//abc = 20;//这种方式的赋值同样无法改变a的值
	//在&abc;之前abc并没有分配内存，而是将其值放入了常量表中，并建立了对应关系.
	//以后用到a的时候直接去常量表中查询。const变量应该跟一般变量是分开放的。
	//但是
	int *abcp = &abc; //不得不给a分配内存，并让abcp指向了abc,你强制这样做的结果.
	*abcp = 20;//强制把8放到给A分配的地址中。
	printf("%d\n",abc);
	
}
