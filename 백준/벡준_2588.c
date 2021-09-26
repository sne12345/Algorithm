#include <stdio.h>

int main(void) {
	int a, b;

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	printf("%d\n", a * (b % 10));
	printf("%d\n", (a * ((b % 100) - (b % 10))) / 10);
	printf("%d\n", (a * (b - (b % 100))) / 100);
	printf("%d\n", (a * (b % 10)) + (a * ((b % 100) - (b % 10))) + (a * (b - (b % 100))));

	return 0;
}