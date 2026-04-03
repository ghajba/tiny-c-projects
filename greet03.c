#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, [[maybe_unused]] char* argv[argc+1]) {

	time_t now;
	struct tm *clock;
	int hour;

	time(&now);
	clock = localtime(&now);
	hour = clock -> tm_hour;

	printf("Good ");
	if(hour < 12) {
		printf("morning");
	}
	else if (hour < 18) {
		printf("afternoon");
	}
	else {
		printf("evening");
	}

	if(argc > 1) {
		printf(", %s", argv[1]);
	}
	
	putchar('\n');

	return EXIT_SUCCESS;
}

