#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#define MAXNB 10

const double myConst = 3.56;

struct myVar_t {
	double v1;
	double v2;
};

double fctB(void) {
	return myConst * 2 + 1;
}

void fctA(void) {
	double x = 3 + myConst + fctB();
	printf("x=%g\n", x);
}

int main(void) {
	double res = 0.0;
	struct myVar_t myVar = {.v1 = 0.0, .v2 = 0.0};

	fctA();
	myVar.v1 = myConst * 2.0;
	res = fctB() * cos(3.12) + myConst;
	printf("res = %g\n", MAXNB * res * myVar.v1);

return EXIT_SUCCESS;
}
