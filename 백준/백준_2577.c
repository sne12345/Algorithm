#include <stdio.h>

int main(void)
{
	int a, b, c, number, num[10] = { 0,0,0,0,0,0,0,0,0,0 };

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	number = a * b * c;	
	
	for (int i = 0; i < 10; i++) {
		num[number % 10]++;
		number = number / 10;
		if (number == 0)
			break;
	}
	for (int i=0; i<10; i++)
		printf("%d\n", num[i]);

	return 0;
}