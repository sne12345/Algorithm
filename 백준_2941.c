#include <stdio.h>

int main(void)
{
	char str[101], sum = 0;

	scanf_s("%s", str, sizeof(str));
	
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'c' && str[i + 1] == '=')
			sum++;
		else if (str[i] == 'c' && str[i + 1] == '-')
			sum++;
		else if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=')
			sum++;
		else if (str[i] == 'd' && str[i + 1] == '-')
			sum++;
		else if (str[i] == 'l' && str[i + 1] == 'j')
			sum++;
		else if (str[i] == 'n' && str[i + 1] == 'j')
			sum++;
		else if (str[i] == 's' && str[i + 1] == '=')
			sum++;
		else if (str[i] == 'z' && str[i + 1] == '=')
			sum++;
	}
	printf("%d\n",strlen(str) - sum);

	return 0;
}