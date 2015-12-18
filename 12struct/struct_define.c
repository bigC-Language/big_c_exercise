#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
 * 结构体的定义方式
 *  * */
struct student{//定义一个关于学生的结构体
	char name[100];
	int age;
	int sex;
	int chinese_score;
};//注意,这里要加结束符
int main(){
	//结构体初始化1
	//调用结构体
	struct student stu_1;
	//为结构体内部成员变量赋值
	//stu_1.name = "波波";//注意,结构体的字符串是一个指针,赋值要用另外的方法
	strcpy(stu_1.name,"波波");//使用c库函数的方法进行赋值
	stu_1.age = 26;
	stu_1.sex = 0;
	stu_1.chinese_score = 100;
	char sex_show[10];
	if(stu_1.sex == 0){
		strcpy(sex_show,"男");
	}else{
		strcpy(sex_show,"女");
	}
	printf("%s,%d,%s,%d\n",stu_1.name,stu_1.age,sex_show,stu_1.chinese_score);
	printf("-------------\n");
	//结构体定义2
	struct student stu_2 = {"小朋友",6,0,23};//这种赋值方式要注意顺序
	printf("%s,%d,%d,%d\n",stu_2.name,stu_2.age,stu_2.sex,stu_2.chinese_score);
	printf("-------------\n");
	//结构体定义3
	struct student stu_3 = {.age = 25,.chinese_score = 0,.sex = 1};//可用调换位置,在前面注意有个英文句号
	//也可以不赋值,为空
	printf("%s,%d,%d,%d\n",stu_3.name,stu_3.age,stu_3.sex,stu_3.chinese_score);
	printf("----------\n");
	struct student stu_4;
	memset(&stu_4,0,sizeof(stu_4));//如果不用memset,会得到乱码��ӷ�,32764,0,0,注意,memset的第一个值要用地址
	printf("%s,%d,%d,%d\n",stu_4.name,stu_4.age,stu_4.sex,stu_4.chinese_score);
	return 0;
}
