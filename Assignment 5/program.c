#include <stdio.h>

void convert(int seconds, int *h, int *m, int * s)
{
	*h = seconds / 3600;
	*m = (seconds - (3600 * *h)) / 60;
	*s = (seconds - (3600 * *h) - (*m * 60));
}

int main(void)
{
	int seconds;
	int h, m, s;

	printf("Enter the amount fo seconds: ");
	scanf("%d", &seconds);

	convert(seconds, &h, &m, &s);

	printf("%d seconds is equal to %d hours, %d minutes, %d seconds.", seconds, h, m, s);

	return 0;
}
