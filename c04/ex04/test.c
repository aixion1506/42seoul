#include <unistd.h>
#include <stdio.h>
// 문자 c를 터미널에 출력하는 함수
void ft_putchar(char c)
{
    write(1, &c, 1); 
}
// 주어진 문자열의 길이를 반환하는 함수
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++; // 문자열의 길이를 계산하는 함수
    return (i);
}
// 유효성 검사를 수행하는 함수, 주어진 base 문자열의 진법 확인
int checkerror(char *str)
{
    int i;
    int j; // 중복문자 검사 변수
    int x;

    x = ft_strlen(str); // 문자열의 길이를 구함
    i = 0;
    if (str[0] == '\0' || x == 1) // 문자열이 비어있거나 길이가 1이면 유효하지 않음
        return (0);
    while (str[i] != '\0')
    {
        if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
            return (0); // 공백, 특수 문자(+, -) 등이 포함되면 유효하지 않음
        j = i + 1; // 중복문자 검사, 대조
        while (j < ft_strlen(str))
        {
            if (str[i] == str[j])
                return (0); // 중복된 문자가 있으면 유효하지 않음
            j++;
        }
        i++;
    }
    return (1); // 모든 유효성 검사를 통과하면 유효함
}
// 정수 nbr을 ba se 문자열로 변환하여 출력하는 함수
void ft_putnbr_base(int nbr, char *base)
{
    int len;
    int error;
    long nb; // 정수 값을 담을 변수 (음수 처리를 위해 long 타입)

    error = checkerror(base); // 기수(base) 문자열의 유효성 검사
    len = ft_strlen(base); // 기수(base) 문자열의 길이
    nb = nbr; // 주어진 정수 값을 nb에 복사

    if (error == 1) // 기수(base)가 유효한 경우
    {
        if (nb < 0) // 음수 처리
        {
            ft_putchar('-'); // 부호 출력
            nb *= -1; // 양수로 변환
        }
        
        if (nb < len) // 기수(base) 문자열 길이보다 작으면
            ft_putchar(base[nb]); // 해당 문자 출력
        if (nb >= len) // 기수(base) 문자열 길이보다 크거나 같으면
        {
            ft_putnbr_base(nb / len, base); // 재귀 호출: 몫 출력
            ft_putnbr_base(nb % len, base); // 재귀 호출: 나머지 출력
        }
    }
}

int main(void)
{
    // ft_putnbr_base 함수를 사용하여 다양한 기수와 정수 값을 테스트
    ft_putnbr_base(-12, "01"); // 이진법, 출력: -1100
    printf("\n");
    ft_putnbr_base(40, "poneyvif"); // 8진법, 출력: 54
    printf("\n");
    ft_putnbr_base(894867, "0123456789"); // 10진법, 출력: 894867
    printf("\n");
    ft_putnbr_base(53, "0123456789abcdef"); // 16진법, 출력: 35
    return (0);
}
