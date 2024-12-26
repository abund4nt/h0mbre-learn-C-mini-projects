#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *username;
	char *lastname;

	printf("Enter the name: ");
	scanf("%ms", &username);

	printf("Enter the lastname: ");
	scanf("%ms", &lastname);

	printf("Hello %s %s!", username, lastname);

	free(username);
	free(lastname);
}
