// Section 1.5.1

#include <stdio.h>

int main()
{
	int c;

	//c = getchar();
	//while (c != EOF)
	while ((c = getchar()) != EOF)
	{
		putchar(c);
		//c = getchar();
	}
}