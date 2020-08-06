#include <stdio.h>

int main(void)
{
	char x;

	scanf_s("%c", &x, sizeof(x));
	printf("%d\n", x);

	return 0;
}