// C program to show the unexpected behaviour
// when %s is used in printf
#include <stdio.h>
int main()
{
	// % is intentionally put here to show the unexpected
	// behaviour when %s is used in printf
	printf("Geek%sforGeek%s");
	getchar();
	return 0;
}

