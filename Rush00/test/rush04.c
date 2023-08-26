#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    first_line(int x)
{
    int w;

    w = 0;
    while (w < x)
    {
        if (w == 0)
        {
			ft_putchar('A');
        }
        else if (w == x - 1)
        {
            ft_putchar('C');
        }
        else
        {
            ft_putchar('B');
        }
        w ++;
    }
}

void    last_line(int x)
{
    int w;

    w = 0;
    while (w < x)
    {
        if (w == 0)
        {
            ft_putchar('C');
        }
        else if (w == x - 1)
        {
            ft_putchar('A');
        }
        else
        {
            ft_putchar('B');
        }
        w ++;
    }
}

void    middle_line(int x)
{
    int w;

    w = 0;
    while (w < x)
    {
        if (w == 0)
        {
            ft_putchar('B');
        }
        else if (w == x - 1)
        {
            ft_putchar('B');
        }
        else
        {
            ft_putchar(' ');
        }
        w++;
    }
}

void	rush(int x, int y)
{
	int l;

	l = 0;
	while (l < y)
	{
		if (l == 0)
		{
			first_line(x);
		}
		else if (l == y -1)
		{
			last_line(x);
		}
		else
		{
			middle_line(x);
		}	
		l ++;
		ft_putchar('\n');
	}
}

int main(void)
{
    rush(4, 4);
    return (0);
}
