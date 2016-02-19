#include <stdio.h>
#define other 3
/*
 * 体验枚举
 * 1,内容结尾处不用加  '  ;  '
 * 其实相当于批量define 操作
 * */
enum sex{
	boy,girl
};
enum color{
	red = 0xfff,black,green,blue,cyan,pink
};
int main(){
	//boy = 10;//已经枚举定义好的,是常量,不能修改
	printf("%d\n",boy);
	printf("%d\n",black);
	printf("%d\n",other);
	return 0;
}
