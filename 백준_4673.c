#include <stdio.h>

int main(void)
{
	int* self = (int*)calloc(10000,sizeof(int));
	int num;
	
	for (int i = 0; i < 10000; i++) {
		self[i] = 0;
	}
	for (int i = 1; i <= 10000; i++) {
		num = nd(i) - 1;
		if (num < 10000)
			self[num] = 1;
	}
	for (int i = 0; i < 10000; i++) {
		if(self[i] == 0)
			printf("%d\n", i+1);
	}
	free(self);

	return 0;
}

int nd(int n)
{
	int sum = n, count = 0, num = n;

	while (num != 0) {
		num = num / 10;
		count++;
	}
	for (int i = 0; i < count; i++) {
		sum += n % 10;
		n = n / 10;
	}
	
	return sum;
}