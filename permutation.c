#include<stdio.h>
#define MAX 100

int main(void)
{
	/* Initialize variables */
	char *userString;
	int i, j;
	int count = 0;

	printf("Enter a string: ");
	scanf("%s", userString);

	/* Count number of characters in userString */
	for(i = 0; i < MAX; i++)
	{
		if(*(userString +i) != '\0')
		{
			count++;
		}
	}

	/* Permute */
	for(i = 0; i < count; i++)
	{
		printf("%c", *(userString+i));
		for(j = i+1; i < count; j++)
		{
			printf("%c", *(userString+j));
		}
	}

	return 0;
}
