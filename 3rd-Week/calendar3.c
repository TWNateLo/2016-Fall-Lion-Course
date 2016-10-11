#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*

d = days in a month
w = when the first day starts in a week
m = which month
y = leap year or not


*/

int main () {
	int b, i, d, w, a, m, y;
	
	//Calculate the first day of designated year
	for(w = 1, b = 0; b < y - 1900; b++){
		if ( ((1900 + b) % 400 == 0) || (((1900 + b)% 4 == 0) && ((1900 + b) % 100 != 0)) ){
			w = (w + 366) % 7;
		}
		else{
			w = (w + 365) % 7;
		}
	}


	//Showing Month at Title
	switch (m) {
		case 1: printf("January");
		case 2: printf("Feburary");
		case 3: printf("March");
		case 4: printf("April");
		case 5: printf("May");
		case 6: printf("June");
		case 7: printf("July");
		case 8: printf("August");
		case 9: printf("September");
		case 10: printf("October");
		case 11: printf("November");
		case 12: printf("December");
	}


	//Printing the calendar of single month
	printf(" Sun Mon Tue Wed Thu Fri Sat\n");
	for(i = 1; i < (d + w + 1); i++) {
		if(i <= w) {
			printf("    ");
		}
		else{
		printf("%4d", i - w);
		}
		if(i % 7 == 0 || i == d + w){
			printf("\n");
		}
	}
}
