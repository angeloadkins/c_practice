#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	celsius = lower;
	printf("=======================\n");
	printf("Celius       Fahrenheit\n");
	printf("=======================\n");	
	while (fahr <= upper) {
		fahr = celsius * (9.0/5.0) + 32;
		printf("%3.0f \t\t %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
