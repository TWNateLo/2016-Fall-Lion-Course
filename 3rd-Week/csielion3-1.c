#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
	srand(time(NULL));
	int i = rand() % 10 + 1;	//Always give out a random num from 1 to 10 
	printf("The random number is: \"%d\"\n", i);
	if (i % 2 != 0) {
		printf("%d is odd\n", i);
	}
	else {
		printf("%d is even\n", i);
	}
}
