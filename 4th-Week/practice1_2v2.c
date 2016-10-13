#include <stdio.h>
int main () {
	char a;
	scanf("%s", &a);
	switch (a) {
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
			printf("Vowel\n");
			break;
		default :
			printf("Consanant\n");
			break;
	}
}
