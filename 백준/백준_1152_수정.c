#include <stdio.h>

int main(void)
{
	char str[1000100], count = 0, num = -1, space = 1;

	scanf_s("%[^'\n]s", str, sizeof(str));

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ')
			space = 1;
		else if (space) {
			space = 0;
			count++;
		}
	}
	printf("%d", count);

	return 0;
}