#include <stdio.h>
#include <malloc.h>
#include <string.h>
/*结构体内的指针*/
struct book{
	char *book_name;
	int book_id;
};
int main(){
	struct book b;
	b.book_name = malloc(100);
	memset(b.book_name,0,100);
	strcpy(b.book_name,"小次郎传奇");
	b.book_id = 101;
	printf("%s,%d\n",b.book_name,b.book_id);
	free(b.book_name);
	printf("----------\n");
	//定义结构体指针内的指针
	struct book *bb = malloc(sizeof(struct book)*2);
	bb->book_name = malloc(100);
	strcpy(bb->book_name,"完美世界");
	printf("%s\n",bb->book_name);
	//注意释放内存的顺序,先释放里面的,再释放外面的
	free(bb->book_name);
	free(bb);
	return 0;
}
