#include <stdio.h>

int main(void) 
{
	int num, sum = 0;

	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) {
		if (seq(i + 1) == 1) {
			sum += 1;
		}
			
	}
	printf("%d\n", sum);

	return 0;
}

int seq(int x)
{
	int def = x % 10 - x / 10 % 10, ox = 1;

	while (x > 9) {
		if ((x % 10 - x / 10 % 10) != def) {
			ox = 0;
		}
		x = x / 10;
	}
	return ox;
}