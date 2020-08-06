#include <stdio.h>

int main(void)
{
	char str[20];
	int num, num1;

	scanf_s("%d", &num);

	for (int k = 0; k < num; k++) {
		scanf_s("%d", &num1);
		scanf_s("%s", str, sizeof(str));

		for (int j = 0; str[j] != '\0'; j++) {
			for (int i = 0; i < num1; i++) {
				printf("%c", str[j]);
			}
		}
		printf("\n");
	}
	return 0;
}