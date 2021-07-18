//Section 1.2
#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
    // header for exercise 1-3
    printf("Fahr\tCelsius\n");
    printf("----------------\n");
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32.0);

		printf("%3.0f\t%6.2f\n", fahr, celsius);
		fahr = fahr + step;

	}
}