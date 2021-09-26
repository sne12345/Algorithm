#include <stdio.h>

long long sum(int *a, int n);

int main(void)
{
	int num[5] = { 1,2,3,4,5 };

	printf("%lld\n",sum(num, 5));

	return 0;
}

long long sum(int *a, int n) 
{
	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += a[i];
	return sum;
}
