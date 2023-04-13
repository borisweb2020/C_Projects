#include <stdio.h>
#include <string.h>

int main(void){
	char greet[] = "Hello World!";
	printf("%s\n", greet);

	char greetAnother[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
	printf("%s\n", greetAnother);

	char text[] = "This is the string";
	text[0] = 't';
	printf("%s\n", text);

	// char carName[] = "Volvo";
	// for(int i = 0; i < strlen(carName); i++){
	// 	printf("%c\n", carName[i]);
	// }

	char txt[] = "We are the so-called \"Vikings\" from the north.";
	printf("%s\n", txt);

	// Functions
	char point[] = "Access";
	printf("%lu\n", strlen(point));

	char str1[20] = "Hello ";
	char str2[]   = "World!";
	strcat(str1, str2); // result is stored in str1
	printf("%s\n", str1);

	char str3[20] = "How you doing?";
	char str4[20];
	strcpy(str4, str3); // copy str3 to str4
	printf("%s\n", str4);

	char str5[] = "Hello";
	char str6[] = "Hello";
	char str7[] = "hello";
	printf("%d\n", strcmp(str5, str6));
	printf("%d\n", strcmp(str5, str7));
}