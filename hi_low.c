// A user has eight tries to guess a randomly generated
// number. After each guess, the program will tell the
// user whether the guess was high or low.

#include <stdio.h>
#include <time.h>


// Protes
int randomNum(void);



int main(){
	printf("Welcome to HiLow. Please guess a number: \n");
	scanf("%d", &userGuess);
	
	int guessCount = 0;	
	int randomNumber = randomNum();
	int i = 0;

	for(i = 0; i < 8; i++){	
		if(userGuess < randomNumber){
			printf("Your guess was too low\n");
			guessCount += 1;
		}	
		else if(userGuess > randomNumber){
			printf("Your guess was too high\n");
			guessCount += 1; 
		}
		else if(userGuess == randomNumber){
			printf("Yeeeeeeeeeeep\n");		
		}
	}	

}

int randomNum(void){
	srand((unsigned) time(&t));
	number = rand() % 80;
	return number;
}
