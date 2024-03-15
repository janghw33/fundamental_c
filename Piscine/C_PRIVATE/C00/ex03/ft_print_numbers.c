//
// Created by ekrmx on 2024-03-11.
//
#include <unistd.h>

void ft_print_numbers(void)
{
    char n = '1';
    while (n <= '9')
    {
        write(1, &n, 1);
        ++n;
    }
}

int main()
{
    ft_print_numbers();
    return 0;
}

