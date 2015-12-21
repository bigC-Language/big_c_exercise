#include <stdio.h>
/*
 * 结构体数组冒泡排序,更改需求
 * 改成,如果年龄相等,再按成绩排序
 * */
struct student{
	char name[100];
	int age;
	int score;
 };
int main(){
	struct student std[8] = {
		{"梁波波",26,100},
		{"肖晨晨",25,99},
		{"小贱贱",20,77},
		{"大剑剑",28,112},
		{"梁俊俊",18,130},
		{"小尘尘",25,102},
		{"萧沉沉",25,135},
		{"小纯纯",26,135}
	};
	int len = sizeof(std)/sizeof(std[0]);
	printf("%d\n",len);
	int i;int j;
	for(i=0;i<len;i++){
		for(j=0;j<i;j++){
			if(std[i].age<std[j].age){
				struct student tmp = std[i];
				std[i] = std[j];
				std[j] = tmp;
			}else if(std[i].age == std[j].age){//如果年龄相同,按成绩排序
				if(std[i].score<std[j].score){
					struct student tmp = std[i];
					std[i] = std[j];
					std[j] = tmp;
				}
			}
		}
	}
	for(i=0;i<len;i++){
		printf("name:%s,age:%d,score:%d\n",std[i].name,std[i].age,std[i].score);
	}
	return 0;
}
