#include <stdio.h>
/*
 * 体验typedef
 * */
 
typedef int myInt;//定义一个新的变量类型

typedef struct LOL{
	char username[100];
	char password[100];
} user;
int main(){
	myInt a = 100;
	printf("%d\n",a);
	printf("-------\n");
	user bob = {"bob","123"};
	printf("password = %s\n",bob.password);
	return 0;
}
