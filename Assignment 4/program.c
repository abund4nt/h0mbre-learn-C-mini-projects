#include <stdio.h>
#define PI 3.14

int main(void)
{
	float radius;
	
	printf("Enter the radius of your circle: ");
	scanf("%f", &radius);
	
	float area = PI * (radius * radius);

	printf("The area: %f", area);

	return 0;
}
