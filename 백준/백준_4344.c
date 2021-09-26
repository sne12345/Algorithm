#include <stdio.h>

int main(void)
{
	int num, num1, num2[1000], count = 0;
	double sum = 0.0, average = 0.0, ratio = 0.0;

	scanf_s("%d", &num);
	for (int k = 0; k < num; k++) {
		scanf_s("%d", &num1);
		for (int i = 0; i < num1; i++) {
			scanf_s("%d", &num2[i]);
			sum += num2[i];
		}
		average = sum / num1;
		for (int i = 0; i < num1; i++) {
			if (num2[i] > average)
				count++;
		}
		ratio = (double)count / num1 * 100;
		printf("%.3f%\%\n", ratio);
		count = 0, sum = 0.0, average = 0.0, ratio = 0.0;
	}
	return 0;
}