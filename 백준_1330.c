#include <stdio.h>

int main(void)
{
	int A, B;

	scanf_s("%d", &A);
	scanf_s("%d", &B);

	if (A > B)
		printf(">\n");
	else if (A < B)
		printf("<\n");
	else if (A == B)
		printf("==\n");

	return 0;
}