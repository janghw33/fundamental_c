//
// Created by ekrmx on 2024-03-11.
//
#include <unistd.h>
void ft_putchar2(char c)
{
    write(1, &c, 1);
}

int main()
{
    ft_putchar2('c');
    return 0;
}
