#include <stdio.h>

int main(void)
{
	int score, sum = 0, average;

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &score);
		if (score < 40)
			score = 40;
		sum += score;
	}
	average = sum / 5;
	printf("%d\n", average);
		
	return 0;
}