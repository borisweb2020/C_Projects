#include <stdio.h>
#include <stdbool.h>

int main(void) {
	bool isProgrammingFun = true;
	bool isFishTasty = false;

	printf("%d\n", isProgrammingFun);
	printf("%d\n", isFishTasty);

	printf("%d\n", 10 == 10);
	printf("%d\n", 10 > 15);

	int myInt;
	float myFloat;
	double myDouble;
	char myChar;

	printf("%lu\n", sizeof(myInt));
	printf("%lu\n", sizeof(myFloat));
	printf("%lu\n", sizeof(myDouble));
	printf("%lu\n", sizeof(myChar));
}