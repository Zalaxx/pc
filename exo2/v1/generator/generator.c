#include "generator.h"
#define INITIAL_VALUE 0

int generator_generate(void)
{
	static int val = INITIAL_VALUE;
	return val++;
}
