#include <stdio.h>

int main(void)
{
	unsigned int fix, var, sale, cost, sales;
	int i = 1, diff[1000];

	scanf_s("%u %u %u", &fix, &var, &sale);

	while(1) {
		cost = fix + var * i;
		sales = sale * i;
		diff[i - 1] = cost - sales;
		if (cost < sales)
			break;
		if (var > sale) {
			i = -1;
			break;
		}
		//printf("%d %d %d\n", cost, sales, i);
		i++;
	}
	printf("%d\n", i);

	return 0;
}

