#include <stdio.h>

int main(void)
{
	char str[30];
	int num,sum = 0;

	scanf_s("%s", str, sizeof(str));

	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'Z')
			num = 10;
		else if(str[i] >= 'S')
			num = 3 + ((int)str[i] - 66) / 3;
		else
			num = 3 + ((int)str[i] - 65) / 3;
		sum += num;
	}
	printf("%d\n", sum);
	return 0;
}