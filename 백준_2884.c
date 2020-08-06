#include <stdio.h>

int main(void)
{
	int hour, minute, goal;

	scanf_s("%d", &hour);
	scanf_s("%d", &minute);

	minute = hour * 60 + minute;
	if (minute < 45) {
		minute += 24 * 60;
	}
	goal = minute - 45;
	hour = goal / 60;
	minute = goal % 60;

	printf("%d %d\n", hour, minute);

	return 0;
}