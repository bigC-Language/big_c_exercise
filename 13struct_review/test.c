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
	struct LOL2 *pp = malloc(sizeof(struct LOL2)*3);
	pp->level = 30;
	//(*pp).lol.nickname= "aaa";//遗留问题,怎么取结构体里面的内嵌结构体里面的内容
	//pp->lol->nickname = "bbb";//已经解决,说了多少遍,不要用这种赋值方式,要用strcpy
	strcpy(pp->lol.nickname,"abc");
	printf("%d,%s\n",pp->level,pp->lol.nickname);
	free(pp);
	return 0;
}
