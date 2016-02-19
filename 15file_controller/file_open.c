#include <stdio.h>
/*
 * 体验文件操作1
 * */
 
int main(){
	FILE *p = fopen("../file_test/a.txt","w");//打开一个文件,用写入的方式打开
	fputs("hello file\n",p);//往文件中写入一行
	fclose(p);//记得要关闭
	printf("end\n");
	return 0;
}
