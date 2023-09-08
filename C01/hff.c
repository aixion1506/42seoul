#include <unistd.h>

void hff_h(int ac, char **av)
{
    int i = 0;

    // 문자열 내에서 'h'를 찾을 때까지 반복
    while (av[1][i] != '\0')
    {
        if (av[1][i] == 'h')
        {
            // 'h'를 발견하면 "h"를 출력하고 줄 바꿈
            write(1, "h\n", 2);
        }
        i++;
    }

    // 매개변수가 1개 이상인 경우도 "h"를 출력
    if (ac > 1)
    {
        write(1, "h\n", 2);
    }
}

int main(int ac, char **av)
{
    hff_h(ac, av);
    return 0;
}

