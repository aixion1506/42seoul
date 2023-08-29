#include <unistd.h>

void array()
{
	char a[5]  = {'1', '2', '3', '4', '5'};
	//int b[3] = {1, 2, 3};
	//char c = '6';
	write(1,&a, 5);
}

int main()
{
	array();
	return (0);
}
