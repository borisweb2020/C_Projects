#include <stdio.h>

int main() {
    char nickname[10];
    scanf("%9[A-Za-z]s", nickname); // input aks123 --- output aks
    scanf("%9[^0123456789\n]s", nickname); // input aks123 --- output aks
    if (!scanf("%9[A-Za-z]s", nickname)) {
      printf("Not valid character\n");
    } else {
      printf("Hello, %s\n", nickname);
    }

    for (int i = 0; i < 10; i++) {

    }

    
    

    return 0;
}
