int ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	// 루프가 `null`이 아닌 곳에서만 실행
	while (str[i] != '\0')
	{
		// 대문자 알파벳인지 확인
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++; // 알파벳이면 i를 1증가후 재실행
		else
			return (0); // 알파벳이 아니라면 함수는 0반환
	}
	return (1);  // 알파벳만 있을시에 함수는 1반환
}

#include <stdio.h>
int	main()
 {
	printf("%d", ft_str_is_uppercase("abcde"));
	printf("\n%d", ft_str_is_uppercase("ABCDE"));
	printf("\n%d", ft_str_is_uppercase("ABCD1"));
}
