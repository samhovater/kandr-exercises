/*
// Section 1.3
#include <stdio.h>

int main()
{
	int fahr;

	for (fahr = 0; fahr  <= 300; fahr = fahr + 20)
	{
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}
*/

/*
// exercise 1-5 - reverse order temps
#include <stdio.h>
int main()
{
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
	{
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}
*/

// Section 1.4 - adding constants
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
	{
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}