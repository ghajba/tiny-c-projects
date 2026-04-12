#include <stdio.h>
#include <stdlib.h>

int place_in_alphabet(char letter) {
        int x = letter;
	
	if(x >= 97 && x <= 122) return x - 96;
	if(x >= 65 && x <= 90) return x - 64;
	return 0;
}

int main(int argc, char *argv[]) {
	if(argc > 1) {
		int rc = place_in_alphabet(*argv[1]);
		if (rc) {
			printf("Place of '%s' in the alphabet is >> %d\n", argv[1], rc);
		}
		else {
			printf("%s is not part of the alphabet\n", argv[1]);
		}
	}
	else {
	       printf("No parameter provided\n");
	}	       
	
    return EXIT_SUCCESS;
}
