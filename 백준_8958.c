#include <stdio.h>

int main(void)
{
	int num, sum = 0, num1 = 1;
	char ox[80];

	scanf_s("%d", &num);
	
	for (int j = 0; j < num; j++) {
		scanf_s("%s", ox, sizeof(ox));
		for (int i = 0; i < 80; i++) {
			if (ox[i] == 'O') {
				sum += num1;
				num1++;
			}
			else if (ox[i] == 'X')
				num1 = 1;
			else {
				num1 = 1;
				break;
			}
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}