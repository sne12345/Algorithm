#include <stdio.h>

int main(void)
{
	int num, value = 1, count = 1;

	scanf_s("%d", &num);
	
	for (int j = 1; value != num; j++) {
		for (int i = 0; i < 6*j; i++) {
			value++;
			if (value == num)
				break;
		}
		count++;
	}
	printf("%d\n", count);

	return 0;
}