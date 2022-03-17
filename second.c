#include <stdio.h>
//n的阶乘
int main() {
	int i = 0;
	int n = 0;
	int ret = 1;
	printf("请输入整数：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		ret = ret * i;
	}
	printf("%d的阶乘red = %d\n",n ,ret);

	return 0;
}