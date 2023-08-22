#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
	srand(time(0));

	char password[PASSWORD_LENGTH + 1];
	int i;

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
	int randomChar = rand()	% 94 + 33;
	password[i] = (char)randomChar;
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("%s", password);
	return (0);
}
