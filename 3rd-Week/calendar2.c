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
	int i, d, w, a, m, y;

	for(w = 2, )



	if(){
		printf
	}
	printf(" Sun Mon Tue Wed Thu Fri Sat\n");
	for(i = 1; i < (d + w); i++) {
		/*w - 1 times */
		if(i < w) {
			printf("    ");
		}
		else{
		printf("%4d", i - w + 1);
		}
		if(i % 7 == 0 || i == d + w - 1){
			printf("\n");
		}
	}
}
