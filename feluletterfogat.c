#include <stdio.h>
#include <stdlib.h>

int main() {

	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);

	printf("V = %10.3lf\n", a *b * c);
	printf("A = %10.3lf\n", 2*a*b + 2*a*c + 2*b*c);

	return 0;	
}