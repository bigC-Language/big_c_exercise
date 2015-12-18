#include <stdio.h>
/*体验结构体和数组2*/


struct student{
	char name[100];
	int age;
	int score;
};
int main(){
	//定义一个结构体数组
	//这是一个数组,数组里有两个结构体
	struct student std[4] = {{"梁bob",26,100},{"肖晨晨",25,99}};
	//交换数组内两个结构体的内容
	struct student tmp = std[0];
	std[0] = std[1];
	std[1] = tmp;
	//结构体数组的打印方式
	int i;
	int len = sizeof(std)/sizeof(std[0]);
	for(i=0;i<len;i++){
		printf("name:%s,age:%d,score:%d\n",std[i].name,std[i].age,std[i].score);
	}
	return 0;
}
