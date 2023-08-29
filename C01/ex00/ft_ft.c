void ft_ft(int *nbr)
{
	*nbr = 42;
}

void atoi(int *num)
{
	char num_arr_rev[20];
	char num_arr[20];
	
	//숫자를 문자로 입력받
	while(*num>0)
	{
		num_arr_rev = *num %10-'0';	
		*num/=10;
	}

	//원복
	while(idx<size)
	{
		num_arr[idx] = num_arr_rev[size-idx];
		idx++;
	}
	//1234 -> "1234"
	//1234/10 .. "4", 123 .. "43", 12.., "432",1
	//"4321",
	------------------
}
int a = 1234;

#include <unistd.h>
int main()
{
	//int *nbr;
	int number=111;
	//nbr = &number;
	ft_ft(&number);
	//number를 문자열로 바꾸는 과정 필요//
	

	write(1, &number, 1);

//	printf("%d", number);
}

