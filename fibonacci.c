#include<stdio.h>

// Prototypes
int nextNum(int prevNum, int currNum);


int main(void)
{
	int userChoice = 0;
	int j = 0;

	printf("How many elements of the Fibonacci sequence would you like? ");
	scanf("%d", &userChoice);
	int fibArray[userChoice - 1];
	fibArray[0] = 1;
	fibArray[1] = 1; 

	for(j = 2; j < userChoice; j++)
	{
		int firstNum = fibArray[j-2];
		int secondNum = fibArray[j-1];
		fibArray[j] = nextNum(firstNum, secondNum);
	}

	int i = 0;
	for(i = 0; i < userChoice-1; i++)
	{
		printf("%d, ", fibArray[i]);
	}
	printf("%d", fibArray[userChoice-1]);
	printf("\n");
	
	return 0;
}

int nextNum(int prevNum, int currNum)
{
	int num;
	return num = prevNum + currNum;
}


