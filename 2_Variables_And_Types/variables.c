#include <stdio.h>

int main(void) {
	int age = 0; // initializing a variable at declaration
	age = 37; // changing its value
	printf("%d\n", age); // %d or %i - format specifiers for int 

	char name;
	name = 'D';
	printf("%c\n", name); // %c - a format specifier for char

	float floatNumber = 5.784;
	printf("%f\n", floatNumber); // %f - a format specifier for float

	printf("The age is %d and the name is %c and the float is %.3f\n", age, name, floatNumber);

	/*Type Conversion*/
	int x = 5;
	int y = 2;
	float result = (float) 5 / 2; // explicit conversion
	printf("The result: %.2f\n", result);
}