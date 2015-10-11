#include <stdio.h>

int main () {

	int counter = 0;
	
	for (int i = 1; i < 100; ++i) {
		for (int j = 1; j < i; ++j) {
			if (i % j == 0)	break;
		}
		if (j == i) ++counter;
	}

	printf ("number is %d", counter);

	return 0;
}
