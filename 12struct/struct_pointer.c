#include <stdio.h>
#include <string.h>
/*
 * 指向结构体的指针
 * */
struct user{
	char username[100];
	char password[100];
	char qq[30];
	int age;
	int sex;
};
int main(){
	struct user per[5] = {
		{"liangbob123","bobo534753123","912510822",26,1},
		{"a81118bobo321","bobo123123","912510822",22,0},
		{"321312","4314","65432124",21,1},
		{"fdfafds","fdsaf","43214567",33,0}
	};
	//struct user *p = &per;
	struct user *p = per;//如果是数组,直接指向数组名就可以了
	printf("%d,%d\n",(*p).age,p->sex);//注意两种取值的方式,一般都是使用后面那种
	//赋值
	p->age = 27;
	p->sex = 0;
	printf("%d,%d\n",p->age,p->sex);
	printf("----------\n");
	//p++;
	printf("%s,%s\n",p->username,p->password);
	printf("---------------\n");
	//p++;p++;p++;
	//printf("(%s),(%s),%d,%d\n",p->username,p->password,p->age,p->sex);
	while(strcmp(p->username,"") != 0){//只能使用int型作为条件,字符串的比较要使用函数strcmp
		printf("%s,%s,%d,%d\n",p->username,p->password,p->age,p->sex);
		p++;
	}
	return 0;
}
