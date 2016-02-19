#include <stdio.h>
#include <string.h>
/*
 * typedef更加大难度的应用
 * */
char *mystrcat(char *s1,char *s2){
	strcat(s1,s2);
	return s1;
}
char *test(char *(*p)(char *, char *),char *s1,char *s2){
	return p(s1,s2);
}
typedef char *(*STRCAT)(char *,char *);//太复杂了..后期还需要琢磨
char *test1(STRCAT p,char *s1,char *s2){
	return p(s1,s2);
}
int main(){
	char a[100] = "hello";
	char b[100] = "world";
	char *str = mystrcat(a,b);
	//printf("%s\n",str);
	printf("-------\n");
	char *p = test1(mystrcat,a,b);
	printf("%s\n",p);
	return 0;
}
