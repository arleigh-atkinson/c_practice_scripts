#include<stdio.h>

/* Prototypes */
void menu(void);
float withdrawal(float, float);
float deposit(float, float);

int main(void)
{
	/* Initialize variables */
	float userAmt;
	int userChoice;
	float userBalance = 0;

	printf("How much is in your account? ");
	scanf("%2f", &userAmt);
	menu();
	scanf("%d", &userChoice);	
	
	if(userChoice == 1)
	{
		float userDeposit;
		printf("How much would you like to deposit? \n");
		scanf("%2f", &userDeposit);

		userAmt = deposit(userAmt, userDeposit);
		printf("Your current balance is %2f", userAmt);
		
	}

	else if(userChoice == 2)
	{
		float userWithdrawal;
		printf("How much would you like to withdraw? ");
		scanf("%2f", &userWithdrawal);
		
		userAmt = withdrawal(userAmt, userWithdrawal);
		printf("Your current balance is %2f", userAmt);
	}
	return 0;
}

void menu(void)
{
	int choice = 0;
	printf("Please select your action: \n");
	printf("1. Deposit \n");
	printf("2. Withdrawal \n");
	scanf("%d", &choice);
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

