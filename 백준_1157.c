#include <stdio.h>

int main(void)
{
	char str[1000000], ans;
	int num[26] = { 0, }, num1, num2, max = 0;

	scanf_s("%s", str, sizeof(str));
	for (int i = 0; i < strlen(str); i++) {
		num1 = (int)str[i];
		if (num1 >= 97 && num1 <= 122) {
			num[num1 - 97]++;
		}
		else if (num1 >= 65 && num1 <= 90) {
			num[num1 - 65]++;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (num[i] > max) {
			max = num[i];
			num2 = i;
			ans = 'a';
		}
		else if (num[i] == max)
			ans = '?';
	}
	if (ans != '?')
		ans = (char)(num2 + 65);
	printf("%c\n", ans);

	return 0;
}