#include<stdio.h>

/* Prototypes */
int menu(void);
float withdrawal(float, float);
float deposit(float, float);

int main(void)
{
	/* Initialize variables */
	float userAmt;
	int userChoice;
	float userBalance = 0;

	printf("How much is in your account?");
	scanf("%2f", &userAmt);
	
	userChoice = menu();
	
	if(userChoice == 1)
	{
		float userDeposit;
		printf("How much would you like to deposit? ");
		scanf("%2f", &userDeposit);

		userAmt = deposit(userAmt, userDeposit);
		printf("Your current balance is %2f", userAmt);
		
	}

	else if(userChoice == 2 || userChoice == 3)
	{
		float userWithdrawal;
		printf("How much would you like to withdraw? ");
		scanf("%2f", &userWithdrawal);
		
		userAmt = withdrawal(userAmt, userWithdrawal);
		printf("Your current balance is %2f", userAmt);
	}
	return 0;
}


int menu(void)
{
	printf("Select one of the following: ");
	printf("1. deposit \n");
	printf("2. check \n");
	printf("3. withdrawal \n");
	int choice;
	scanf("%d", &choice);
	return choice;
}

float deposit(float accountAmt, float depositAmt)
{
	float balance = accountAmt + depositAmt;
	return balance;
}

float withdrawal(float accountAmt, float withdrawalAmt)
{
	float balance = accountAmt - withdrawalAmt;
	return balance;
}

