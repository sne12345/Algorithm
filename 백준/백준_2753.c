#include <stdio.h>

int main(void)
{
	int year;

	scanf_s("%d", &year);
	
	if ((year % 4 == 0) && (year % 100 != 0))
		printf("%d\n",1);
	else if (year % 400 == 0)
		printf("%d\n",1);
	else
		printf("%d\n",0);

	return 0;
}