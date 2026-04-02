#include <stdio.h>
#include <stdlib.h>

int main(int argc, [[maybe_unused]] char* argv[argc+1]) {
	if(argc < 2) {
		puts("Hello, you handsome beast!");
	}
	else {
		printf("Hello, %s!\n", argv[1]);
	}
	return EXIT_SUCCESS;
}

