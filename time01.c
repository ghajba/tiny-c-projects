#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	time_t now;

	time(&now);
	printf("The computer thinks it is %ld\n", now);
	printf("%s", ctime(&now));

	return EXIT_SUCCESS;
}

