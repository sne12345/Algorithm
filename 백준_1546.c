#include <stdio.h>

int main(void)
{
	int num, array[1000] = { 0 , };
	double max = 0, sum = 0, array1[1000] = { 0, }, average = 0;

	scanf_s("%d", &num);
	
	for (int i = 0; i < num; i++) {
		scanf_s("%d", &array[i]);
		if (array[i] > max)
			max = array[i];
	}
	for (int i = 0; i < num; i++) {
		array1[i] = array[i] / max * 100;
		sum += array1[i];
	}
	average = sum / num;
	printf("%f\n", average);

	return 0;
}