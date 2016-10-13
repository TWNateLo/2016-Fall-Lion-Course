#include <stdio.h>
int main () {
	int i;
	for(i = 0; i < 50; ++i) {
		if(i > 30) break;
		if(i % 2 != 0) continue;
		printf("%d is a even number\n", i);
	}
}
