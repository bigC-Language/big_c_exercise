#include <stdio.h>
#include <malloc.h>
#include <string.h>
/*
 * 函数内修改结构体的值
 * */
struct LOL{
	char username[100];
	char password[100];
	char nickname[100];
	int sex;
};
void setLOLContent(struct LOL *p){
	strcpy(p->username,"用户名很长");
	strcpy(p->password,"密码");
	strcpy(p->nickname,"超神很累");
	p->sex = 20;
}
void printfLOLContent(struct LOL lol){//一般来说,不要把结构体作为参数,一般都用指针,如下面的函数
	printf("%s,%s,%s,%d\n",lol.username,lol.password,lol.nickname,lol.sex);
}
void n_printfLOLContent(struct LOL *lol){
	printf("%s,%s,%s,%d\n",lol->username,lol->password,lol->nickname,lol->sex);
}
int main(){
	struct LOL *pp = calloc(sizeof(struct LOL),3);
	setLOLContent(pp);
	printfLOLContent(*pp);
	n_printfLOLContent(pp);
	free(pp);
	return 0;
}
