#include <unistd.h>

void	hff_h(int ac, char **av)
{
	int i = 0;
	
	while (av[1][i] != '\0')
	{
		if (av[1][i] == 'h')
		{
			write(1, "h\n", 2);
		}
		else if (av[1][i] != 'h')
		 {
			write(1, "h\n", 2);
                 }
		else if (ac != 1)
		{
			write(1, "h\n", 2);
		}
	} 
}

int	main(int ac, char **av)
{
	hff_h(ac, av);
	return 0;
}
