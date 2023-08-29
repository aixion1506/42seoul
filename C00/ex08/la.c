#include <unistd.h>

void writef(int n)
{
	if (n <= 0)
		return;
	write(1, "A", 1);
	writef(n -1);
	write(1, "\n", 1);
}

int main()
{
	int n = 10;
	writef(n);
	return 0;
}
