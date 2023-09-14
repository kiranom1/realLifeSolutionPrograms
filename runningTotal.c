/* Calculate running total */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int sum(int tot);

int main() {
	printf("The current running total: %d \n", sum(75));
	printf("The current running total: %d \n", sum(25));
	printf("The current running total: %d \n", sum(83));
	printf("The current running total: %d \n", sum(325));

	return 0;
}


int sum(int tot) {
	static int crt=0;
	       crt = (crt+tot);
	       return crt;
}
