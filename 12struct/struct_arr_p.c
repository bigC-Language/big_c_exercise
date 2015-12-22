#include <stdio.h>
#include <malloc.h>
#include <string.h>
/*
 * 结构体中的数组和指针
 *  * */
struct student{
	char username[100];
	char *password;
	int age;
};
int main(){
	//初始化结构体
	struct student std;
	//为结构体赋值
	strcpy(std.username,"超神很烦");
	std.password = malloc(100);
	strcpy(std.password,"超神很烦密码");
	//给结构体指一个指针
	struct student *p = &std;
	p->age = 20;
	printf("%s,%s,%d\n",p->username,p->password,p->age);
	free(p->password);
	return 0;
}
