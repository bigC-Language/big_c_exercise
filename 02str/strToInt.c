#include <stdio.h>
int main()
{
	char s[100] = "12356";

	int len = 0;
	while (s[len++]);
	len--;

	int value = 0;//存放变量为将字符串转化为整数后的变量
	int i;
	int tmp = len;
	for (i = 0; i < len; i++)//遍历字符串
	{ 
		int base = 10;//求10的n次方
		if ((tmp - i - 1) == 0)
			{
				base = 1;
			}
		else
		{
			int j;
			for (j = 1; j < (tmp - i - 1); j++)
			{
				base *= 10;
			}
		}

		value += (base * (s[i] - '0'));
	}

	printf("%d\n", value);
	return 0;
}
