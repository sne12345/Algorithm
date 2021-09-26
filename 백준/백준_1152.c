#include <stdio.h>

int main(void)
{
	char str[1000000];

	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);
	
	while (str[strlen(str)] == '\0') {
		scanf_s("%s", str, sizeof(str));
		printf("%s\n", str);
	}
		
	return 0;
}