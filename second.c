#include <stdio.h>
//n�Ľ׳�
int main() {
	int i = 0;
	int n = 0;
	int ret = 1;
	printf("������������");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		ret = ret * i;
	}
	printf("%d�Ľ׳�red = %d\n",n ,ret);

	return 0;
}