#include <stdio.h>

int main(void){
	// Is this a positive or negative number
	int myNum = -10;

	if(myNum < 0){
		printf("The value is a negative number\n");
	} else if(myNum > 0){
		printf("The value is a positive number\n");
	} else {
		printf("the value is 0\n");
	}

	// Ternary operator
	(myNum > 0) ? printf("The positive number\n") : printf("The negative number or 0\n");

	// Switch statement
	int day = 4;

	switch(day){
		case 6:
			printf("Today is Saturday\n");
			break;
		case 7:
			printf("Today is Sunday\n");
			break;
		default:
			printf("Looking forward to the Weekend\n");

	}


}