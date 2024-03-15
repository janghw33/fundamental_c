//
// Created by ekrmx on 2024-03-11.
//

#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
    char a = 'z';
    while( a >= 'a')
    {
        write(1, &a, 1);
        --a;
    }
}

int main(void)
{
    ft_print_reverse_alphabet();
    return 0;
}
