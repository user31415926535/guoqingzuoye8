#include <stdio.h>
int sum(int k, int n)
{
	if (k == 0 || k == n)
		return 1;
	else
		return sum(k, n - 1) + sum(k - 1, n - 1);
}
int main()
{
	int k, n;
		printf("������һ����");
		scanf_s("%d%d", &k, &n);
		printf("%d", sum(k,n));
}