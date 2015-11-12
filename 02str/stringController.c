#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
 * 字符串操作
 * */
 void test_aoti();
 void test_strcat();
 void test_strncat();
 void test_strcmp();
 void test_strncmp();
 void test_strcpy();
 void test_strncpy();
 void test_sizeof_strlen();
int main(){
	//test_aoti();
	//test_strcat();
	//test_strncat();
	//test_strcmp();
	//test_strncmp();
	//test_strcpy();
	//test_strncpy();
	test_sizeof_strlen();
	return 0;
}
//以下内容请删除并重现
/*把字符串转化成整型*/
void test_aoti(){
	char str[] = "12345";
	int i = atoi(str);
	printf("%d\n",i);
}
/*字符串追加*/
void test_strcat(){
	char s1[] = "abc";
	char s2[] = "acc";
	strcat(s1,s2);//注意，他的返回值不是字符串
	printf("%s\n",s1);
}
/*字符串追加,但是可用限定追加长度*/
void test_strncat(){
	char s1[] = "aaabbbccc";
	char s2[] = "eeefffgggass";
	strncat(s1,s2,3);
	puts(s1);
}
/*两个字符串比较，注意返回值的不同*/
void test_strcmp(){
	char s1[] = "bbb";
	//char s2[] = "aaa";
	char s2[] = "bbb";
	//char s2[] = "ccc";
	/*
	 * 对比状况
	 * s1>s2    =>   >0
	 * s1=s2    =>   =0
	 * s1<s2    =>   <0
	 * */
	int i = strcmp(s1,s2);
	printf("%d\n",i);
}
/*字符串比较，但可用限定长度*/
void test_strncmp(){
	char s1[] = "bbb";
	char s2[] = "bbb12dd";
	int i = strncmp(s1,s2,sizeof(s1)-1);
	printf("%d\n",i);
}
/*字符串拷贝*/
void test_strcpy(){
	char s1[] = "abcdefg";
	char s2[] = {0};
	strcpy(s2,s1);
	printf("%s\n",s2);
}
/*字符串拷贝，安全模式，标准用法*/
void test_strncpy(){
	char s1[] = "abfsdadfscdef";
	char s2[] = {0};
	strncpy(s2,s1,sizeof(s1) - 1);
	s2[sizeof(s1) - 1] = 0;
	printf("%s\n",s2);
}
/*sizeof和strlen的区别*/
void test_sizeof_strlen(){
	char str1[] = "你好世界";
	//char str2[] = "abcd";
	int i = sizeof(str1);
	int j = strlen(str1);
	printf("sizeof（你好世界）=%d\n",i);
	printf("strlen（你好世界）=%d\n",j);
	//strlen 是返回字符串的长度。
	//sizeof，却是用来取得变量或类型所占用的内存大小的。
	//其实就是相差一个字节
}
