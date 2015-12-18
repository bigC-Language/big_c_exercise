#include <stdio.h>
/*
 * 结构体数组的冒泡排序
 * */
struct student{
	char name[100];
	int age;
	int score;
};
int main(){
	struct student std[5] = {{"梁波波",26,100},{"肖晨晨",25,99},{"小贱贱",20,77},{"大剑剑",28,112},{"梁俊俊",18,130}};

	int i=0,j=0;
	int len = sizeof(std)/sizeof(std[0]);
	//针对年龄进行冒泡排序
	for(i=0;i<len;i++){
		for(j=0;j<i;j++){
			if(std[i].age<std[j].age){
				struct student tmp = std[i];
				std[i] = std[j];
				std[j] = tmp;
			}
		}
	}
	printf("按年龄排序:\n");
	for(i=0;i<len;i++){
		printf("name:%s,age:%d,score:%d\n",std[i].name,std[i].age,std[i].score);
	}
	printf("-----------\n");
	//针对成绩进行冒泡排序
	for(i=0;i<len;i++){
		for(j=0;j<i;j++){
			if(std[i].score<std[j].score){
				struct student tmp = std[i];
				std[i] = std[j];
				std[j] = tmp;
			}
		}
	}
	//结构体数组的打印方式
	printf("按成绩排序:\n");
	for(i=0;i<len;i++){
		printf("name:%s,age:%d,score:%d\n",std[i].name,std[i].age,std[i].score);
	}
	return 0;
}
