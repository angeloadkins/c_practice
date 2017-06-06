#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	celsius = upper;
	printf("=======================\n");
	printf("Celius       Fahrenheit\n");
	printf("=======================\n");	
	while (celsius >= lower) {
		fahr = celsius * (9.0/5.0) + 32;
		printf("%3.0f \t\t %6.1f\n", celsius, fahr);
		celsius = celsius - step;
	}
}
