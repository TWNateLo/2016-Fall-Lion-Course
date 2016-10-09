#include <stdio.h>
#include <stdlib.h>
int main () {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	do{
		if (a < b){
			b = b - a;
		}
		else {
			a = a - b;
		}
	}while(a != b);
	printf("The greatest common divisor of a & b is: \"%d\"\n", a);
}
