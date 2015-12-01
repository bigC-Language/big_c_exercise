#include <stdio.h>
int getStrlen(char str[]);
int main(){
	char str[] = "hello world!";
	int len = getStrlen(str);
	printf("%d\n",len);
	return 0;
}
int getStrlen(char str[]){
	//int a = 0;
	//int *len = &a;
	//while(str[*len++]);
	//return *len;
	
}
