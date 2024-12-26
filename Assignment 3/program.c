#include <stdio.h>

int main()
{
	char username[30];
	char lastname[30];

	printf("Enter the name: ");
	scanf("%s", username);

	printf("Enter the lastname: ");
	scanf("%s", lastname);

	printf("Hello %s %s!", username, lastname);
}
