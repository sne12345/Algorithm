#include <stdio.h>

int main(void)
{
	char str[100];
	int abc[26] = { -1 }, num;
	memset(abc, -1, sizeof(abc));

	scanf_s("%s", str, sizeof(str));
	for (int i = 0; str[i] != '\0'; i++) {
		num = (int)str[i] - 97;
		if(abc[num] == -1)
			abc[num] = i;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", abc[i]);
	}
	return 0;
}