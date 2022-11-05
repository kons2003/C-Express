#include <stdio.h>
#define HOURLY_WAGE 13200

int main(void)
{
	int hour, meal, bonus, total;

	printf("근무 시간: ");
	scanf_s("%d", &hour);

	if (hour < 40)
		meal = (hour / 4) * 8000;
	else if (hour >= 40 && hour <= 60)
		meal = (hour / 4) * 10000;
	else
		meal = (60 / 4) * 10000;

	if (hour >= 40 && hour <= 60)
	{
		total = HOURLY_WAGE * hour + meal;
		bonus = total * 0.1;
	}
	else if (hour < 40)
	{
		total = HOURLY_WAGE * hour + meal;
		bonus = total * 0.05;
	}
	else
	{
		total = HOURLY_WAGE * 60 + meal;
		bonus = total * 0.1;
	}

	printf("총 수령액: %d", total + bonus);

	return 0;
}