#include <stdio.h>
#include <time.h>
/*体验寄存器的使用方式*/
int main(){
	//使用寄存器的情况
	int t1=time(NULL);
	register int i1 = 100;//定义一个寄存器变量
	//int *p = &i;//因为存放在寄存器中的变量没有内存地址,所以不能通过指针指引
	int k;
	for(k=0;k<100000;k++){
		printf("%d\n",i1);
	}
	int t2=time(NULL);
	//不适用寄存器的情况
	int t3=time(NULL);
	int i2 = 200;
	for(k=0;k<100000;k++){
		printf("%d\n",i2);
	}
	int t4=time(NULL);
	printf("t_register = %d\n",t2-t1);
	printf("t_auto = %d\n",t4-t3);
	//t_register = 11
	//t_auto = 12
	//结论:确实快了一点
	return 0;
}
