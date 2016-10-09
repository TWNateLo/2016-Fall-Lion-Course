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
	for(w = 2, b = 0; b < (y - 1900); b++){
		if ( (y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)) ){
			w = (w + 366) % 7;
		}
		else{
			w = (w + 365) % 7;
		}
	}


	//Showing Month at Title
	if(m == 1) {
		printf("January");
	}
	else if(m == 2) {
		printf("Feburary");
	}
	else if(m == 3) {
		printf("March");
	}
	else if(m == 4) {
		printf("April");
	}
	else if(m == 5) {
		printf("May");
	}
	else if(m == 6) {
		printf("June");
	}
	else if(m == 7) {
		printf("July");
	}
	else if(m == 8) {
		printf("August");
	}
	else if(m == 9) {
		printf("September");
	}
	else if(m == 10) {
		printf("October");
	}
	else if(m == 11) {
		printf("November");
	}
	else if(m == 12) {
		printf("December");
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
