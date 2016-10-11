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
	switch (m) {
		case 1: printf("January\n");
		case 2: printf("Feburary\n");
		case 3: printf("March\n");
		case 4: printf("April\n");
		case 5: printf("May\n");
		case 6: printf("June\n");
		case 7: printf("July\n");
		case 8: printf("August\n");
		case 9: printf("September\n");
		case 10: printf("October\n");
		case 11: printf("November\n");
		case 12: printf("December\n");
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
