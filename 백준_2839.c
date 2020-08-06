#include <stdio.h>

int main(void)
{
	int num, result = 0, max, ok = 0, count = 0;

	scanf_s("%d", &num);
	
	max = num / 5;
	for (int i = max; i >= 0 ; i--) {
		result = num - 5 * i;
		if (result % 3 == 0) {
			count = i;
			ok = 1;
			break;
		}
	}
	count += result / 3;
	if(ok == 1)
		printf("%d\n", count);
	else if (ok == 0)
		printf("%d\n", -1);

	return 0;
}