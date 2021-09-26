#include <stdio.h>

int main(void)
{
	int num[9], max = 0, maxcount = 0;

	
	for (int i = 0; i < 9; i++) {
		scanf_s("%d", &num[i]);
		if (num[i] > max) {
			max = num[i];
			maxcount = i+1;
		}
	}
	printf("%d\n", max);
	printf("%d\n", maxcount);

	return 0;
}