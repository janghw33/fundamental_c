/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <janghw33@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:12:29 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/11 22:17:34 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by ekrmx on 2024-03-11.
//
#include <unistd.h>

void ft_print_alphabet(void)
{
    char a = 'a';
    while(a <= 'z')
    {
        write(1, &a, 1);
        ++a;
    }
};

int main()
{
    ft_print_alphabet();
    return 0;
}
