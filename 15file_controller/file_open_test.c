#include <stdio.h>
#include <string.h>
/*不断的往文件里面写入内容,当用户输入exit时退出*/
int main(){
	FILE *p = fopen("../file_test/b.txt","w");
	while(1){
		char str[100];
		scanf("%s",str);
		if(strcmp(str,"exit") == 0){
			break;
		}
		int len = strlen(str);
		str[len] = '\n';
		fputs(str,p);
	}
	printf("end\n");
	return 0;
}
