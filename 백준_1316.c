#include <stdio.h>

int main(void)
{
	char str[101];
	int number;
	int num, ox = 1, sum = 0;

	scanf_s("%d", &number);

	for (int j = 0; j < number; j++) {
		int all[26] = { 0, }, overlap[26] = { 0, };

		scanf_s("%s", str, sizeof(str));
		ox = 1;

		for (int i = 0; i < strlen(str); i++) {
			num = (int)str[i] - 97;
			all[num]++;
			if (str[i] == str[i + 1])
				overlap[num]++;
		}
		/*
		for (int i = 0; i < 26; i++) {
			printf("%d\n", all[i]);
		}
		printf("-------------------\n");
		for (int i = 0; i < 26; i++) {
			printf("%d\n", overlap[i]);
		}
		*/
		for (int i = 0; i < 26; i++) {
			if ((all[i] - overlap[i] - 1) > 0) {
				ox = 0;
				break;
			}
		}
		if (ox == 1)
			sum++;
		//printf("ox = %d\n", ox);
	}
	printf("%d\n", sum);
	return 0;
}