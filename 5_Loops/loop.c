#include <stdio.h>

int main(void){
	int i = 0;

	while(i < 5){
		printf("%d\n", i);
		i++;
	}

	do{
		printf("%d\n", i);
		i++;
	}
	while(i < 3);

	for(int i = 0; i < 6; i++){
		printf("%d\n", i);
	}

	for(int i = 0; i < 2; i++){
		printf("Outer: %d\n", i);

		for(int j = 0; j < 3; j++){
			printf("Inner: %d\n", j);
		}
	}

	for(int i = 0; i < 8; i++){
		if(i == 4){
			break;
		}
		printf("%d\n", i);
	}

	for(int i = 0; i < 8; i++){
		if(i == 4){
			continue;
		}
		printf("%d\n", i);
	}
}