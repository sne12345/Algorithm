#include <stdio.h>

int main(void)
{
	int x = 1, y = 1;

	while (!(x == 0) || !(y == 0)){
		scanf_s("%d", &x);
		scanf_s("%d", &y);
		if (!(x == 0) || !(y == 0))
			printf("%d\n", x + y);
	} 

	return 0;
}