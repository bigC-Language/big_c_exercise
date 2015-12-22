#include <stdio.h>
/*
 * 将结构作为函数的参数
 * */
struct LOL{
	char username[100];
	char password[100];
	char nickname[100];
	int sex;
};
void getLOLContent(struct LOL lol){//注意,参数是结构体
	printf("%s,%s,%s,%d\n",lol.username,lol.password,lol.nickname,lol.sex);
}
int main(){
	struct LOL lol = {"账号","密码","昵称",0};
	getLOLContent(lol);
	return 0;
}
