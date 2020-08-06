#include <stdio.h>

int main(void) 
{
	int num;

	scanf_s("%d", &num);

	for (int j = 0; j < num; j++) {
		for (int i = 0; i < num; i++) {
			if (i % 2 == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		for (int i = 0; i < num; i++) {
			if (i % 2 == 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}