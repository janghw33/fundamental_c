//
// Created by ekrmx on 2024-03-11.
//

#include <unistd.h>
void ft_is_negative(int n)
{
     if (n < 0) write(1, "n", 1);
     else write(1, "P", 1);
}

#include <stdio.h>
int main()
{
    int a = scanf("%d", &a);
    ft_is_negative(a);
    return 0;
}

