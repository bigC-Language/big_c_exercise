#include <stdio.h>
/*
 * 指向二维数组的指针
 * */
int main(){
	int arr[2][3] = {{1,2,3},{4,5,6}};//定义二维数组
	int (*p)[3] = arr;//定义一个指针,指向int [3]这种数据类型
	printf("p[1][2]=%d\n",p[1][2]);//p[1][2]是第二行,第三列,数组是从0开始算起的
	printf("p=%d\n",*p[0]);//第一行的首位数的值
	printf("sizeof(p)=%zu\n",sizeof(p));
	
	/*
	 * 通过指针遍历二维数组
	 * */
	 int i=0,j=0;
	 for(i = 0;i<2;i++){
		for(j=0;j<3;j++){
			//主要注意*(*(p+i)+j)这种读值的方式,另外一种应该明了
			printf("*(*(p+%d)+%d)=%d,p[%d][%d] = %d\n",i,j,*(*(p+i)+j),i,j,p[i][j]);
		}
	}
	return 0;
}
