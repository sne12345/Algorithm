#include <stdio.h>

int main(void)
{
	int num, num1, count = 0;

	scanf_s("%d", &num);
	if (num < 10)
		num = num * 10;
	num1 = num;

	do {
		num = num % 10 * 10 + (num / 10 + num % 10) % 10;
		count++;
	} while (num != num1);

	printf("%d\n", count);
	
	return 0;
}