#include "suite.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 0;

	printf("La suite de symbole(s): \n");
	while (n-- > 0)
        suite_esuite(n);

	printf("\n");
	return EXIT_SUCCESS;
}
