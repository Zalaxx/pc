#include <stdio.h>
#include <stdarg.h>
#include "generator.h"

#define INITIAL_VALUE 1
#define INITIAL_STEP 1

#define RECUPERER(parametres, debut, variable) \
    va_start(parametres, debut);                \
    variable = va_arg(parametres, int);          \
    va_end(parametres);

int generator_generate(message m, ...)
{
	static int initial_val = INITIAL_VALUE;
	static int current_val = INITIAL_VALUE;
	static int step = INITIAL_VALUE;
    va_list parametres;

	switch (m) {
        case Premier:
            va_start(parametres, m);
            initial_val = va_arg(parametres, int);
            va_end(parametres);
        case Pas:
            va_start(parametres, m);
            step = va_arg(parametres, int);
            va_end(parametres);
        case Debut:
            current_val = initial_val;
            return 0;
        case Suivant:
            int n = current_val;
            current_val += step;
            return n;
        default:
            printf("problemo!!!!");
            break;
    }
    return 0;
}
