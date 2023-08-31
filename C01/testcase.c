/*   made		by juhyeopa */
/*   1st edit 	by 			*/
​
#include <stdio.h>
#include <unistd.h>
#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c" 
​
int	main(void)
{
	printf("--------------------------------------------------------------\n");
	int	*nbrf;
	int	num = 0;
	nbrf = &num;
​
	printf("0번 문제 입니다\n");
	printf("ft_ft\n");
	printf ("%d => ", num);
	ft_ft(nbrf);
	printf ("%d\n", num);
	
	printf("--------------------------------------------------------------\n");
	int n;
	int *nbr8;
	int	**nbr7;
	int ***nbr6;
	int ****nbr5;
	int *****nbr4;
	int ******nbr3;
	int	*******nbr2;
	int ********nbr1;
	int *********nbr;
​
	n = 1;
	nbr8 = &n;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;
	ft_ultimate_ft(nbr);
​
	printf("1번 문제 입니다\n");
	printf("ft_ultimate_ft\n");
	printf ("%d => ", n);
	ft_ultimate_ft(nbr);
	printf ("%d\n", n);
	printf("\n");
	
	printf("--------------------------------------------------------------\n");
	int x = 1;
	int y = 2;
	ft_swap(&x, &y);
	printf("2번 문제 입니다\n");
	printf("ft_swap\n");
	printf ("x = %d , y = %d \n", x, y);
	ft_swap(&x, &y);
	printf("ft_swap use\n");
	printf ("x = %d , y = %d \n", x, y);
​
	printf("--------------------------------------------------------------\n");
	int x3 = 42;
	int y3 = 0;
	int *div;
	int *mod;
	int divtemp = 0;
	int modtemp = 0;
	
	div = &divtemp;
	mod = &modtemp; 
	printf("3번 문제 입니다\n");
	printf("ft_div_mod\n");
	ft_div_mod(x3, y3, div, mod);
	printf ("x = %d , y = %d => div = %d, mod => %d \n", x3, y3, divtemp, modtemp);
	y3 = 5;
	ft_div_mod(x3, y3, div, mod);
	printf ("x = %d , y = %d => div = %d, mod => %d \n", x3, y3, divtemp, modtemp);
​
	printf("--------------------------------------------------------------\n");
	int	x4 = 42;
	int y4 = 0;
	int *a;
	int *b;
​
	a = &x4;
	b = &y4;
	printf("4번 문제 입니다\n");
	printf("ft_div_mod\n");
	printf ("x = %d , y = %d => ", x4, y4);
	ft_ultimate_div_mod(a, b);
	printf ("div = %d, mod = %d \n", x4, y4);
	y4 = 5;
	printf ("x = %d , y = %d => ", x4, y4);
	ft_ultimate_div_mod(a, b);
	printf ("div = %d, mod = %d \n", x4, y4);
	// tip. 나누는 값이 0일 경우를 생생각각해  보셨나요>?
​
	printf("--------------------------------------------------------------\n");
	char *str = "42seoul penguine";
​
	printf("5번 문제 입니다\n");
	printf("ft_putstr\n");
	write(1, "42seoul penguine => " ,20);
	ft_putstr(str);
	printf("\n");
	printf("--------------------------------------------------------------\n");
	
	printf("6번 문제 입니다\n");
	printf("ft_strlen\n");
	write(1, "42seoul penguine=>" ,20);
	int temp = ft_strlen(str);
	printf("%d\n",temp);
​
	printf("--------------------------------------------------------------\n");
	
	printf("7번 문제 입니다\n");
	printf("ft_rev_int_tab\n");
	int tab[] = {0,1,2,3,4,5};
	printf ("%d,%d,%d,%d,%d,%d",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
	ft_rev_int_tab(tab,6);
	printf(" => \n");
	printf ("%d,%d,%d,%d,%d,%d\n",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
​
	printf("--------------------------------------------------------------\n");
	printf("8번 문제 입니다\n");
	printf("ft_sort_int_tab\n");
	int	tab8[] = {5,3,1,2,0,4};
	printf ("%d,%d,%d,%d,%d,%d\n",tab8[0],tab8[1],tab8[2],tab8[3],tab8[4],tab8[5]);
	printf(" => ");
	ft_sort_int_tab(tab8,6);
	printf ("%d,%d,%d,%d,%d,%d",tab8[0],tab8[1],tab8[2],tab8[3],tab8[4],tab8[5]);
​
}
