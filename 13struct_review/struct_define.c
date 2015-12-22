#include <stdio.h>
#include <malloc.h>
#include <string.h>
/*结构体复习*/
struct LOL{
	char username[100];
	char password[100];
	char nickname[100];
	int sex;
};
struct LOL2{
	struct LOL lol;
	int level;
};
int main(){
	//初始化结构体
	//struct LOL bob = {"912510822","b123","超神很烦",0};//在栈中定义
	//struct LOL bob = {.sex = 0,.username = "12345"};//另一种定义方式,可以定义顺序变化
	//struct LOL *p = &bob;
	struct LOL *p = calloc(sizeof(struct LOL),10);//在堆中定义
	strcpy(p->username,"912510822");
	strcpy(p->password,"b123");
	strcpy(p->nickname,"超神很烦");
	p->sex = 0;
	printf("%s,%s,%s,%d\n",p->username,p->password,p->nickname,p->sex);
	//使用完之后记得把堆释放
	free(p);
	
	printf("------------\n");
	//结构体数组
	struct LOL user[5];
	memset(user,0,sizeof(user));
	int len = sizeof(user)/sizeof(user[0]);
	printf("%d\n",len);
	int i=0;
	for(i=0;i<len;i++){
			printf("%s,%s,%s,%d\n",user[i].username,user[i].password,user[i].nickname,user[i].sex);
	}
	printf("------------\n");
	struct LOL2 *pp = malloc(sizeof(struct LOL2)*3);
	pp->level = 30;
	//(*pp).lol.nickname= "超神很烦2";//遗留问题,怎么取结构体里面的内嵌结构体里面的内容
	//pp->lol->nickname = "超神很烦2";//已经解决,说了多少遍,不要用这种赋值方式,要用strcpy
	printf("%d\n",pp->level);
	free(pp);
	return 0;
}
