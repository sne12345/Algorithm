#include <stdio.h>

int main(void)
{
	int num, sum = 0;
	char str[100];

	scanf_s("%d", &num);
	scanf_s("%s", str, sizeof(str));

	for (int i = 0; str[i] != '\0'; i++) {
		sum += (int)str[i] - 48;
	}
	printf("%d\n", sum);

	return 0;
}