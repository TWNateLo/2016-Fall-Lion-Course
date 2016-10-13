#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
	int r, a, min, max;
	max = 100; min = 0;
	srand ( time(NULL) );
	r = (rand() % 100) + 1;
	while(1) {
		scanf("%d", &a);
		if(r == a) {
			printf("ans = %d\n", r);
			return 0;
		}
		else if(r > a) {
			min = a;
			printf("%d-%d\n", a, max);
		}
		else if(r < a) {
			max = a;
			printf("%d-%d\n", min, a);
		}
	}
}
