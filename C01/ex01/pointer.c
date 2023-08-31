#include <stdio.h>

void pointer()
{
	int org;
	int *pointer;
	
   	org = 2;

	pointer = &org;
}

int main()
{
	pointer(org);
	printf("%d", org);
}
