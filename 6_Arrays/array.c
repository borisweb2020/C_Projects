#include <stdio.h>

int main(void){
	int myArray[] = {25, 50, 75, 100};

	myArray[0] = 55;

	for(int i = 0; i < 4; i++){
		printf("%d\n", myArray[i]);
	}


	int myMatrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

	myMatrix[0][1] = 88;

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			printf("%d\n", myMatrix[i][j]);
		}
	}
}