#include <stdio.h>
int main() {
    for(int i = 0; i < 8; i++) {
		for(int j = 0; j < 8; j++) {
			if((i+j)%2) {
				printf("\xE2\x96\xA0");
			}
			else {
				printf("\xE2\x96\xA1");
			}
		}
		printf("\n");
	}
    
	return 0;
}
