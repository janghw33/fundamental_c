/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyeongw <jhyeongw@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 21:21:46 by jhyeongw          #+#    #+#             */
/*   Updated: 2024/03/21 21:38:19 by jhyeongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// created by JangHW on 2024-03-20 20:29

int     ft_str_is_alpha(char *str);

#include <stdio.h>
int main()
{
    char a[] = "aSAASa";
    char b[] = "aBa4dfe";
    char c[] = "aa w";

    printf("%d", ft_str_is_alpha(a));

}

int     ft_str_is_alpha(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if (('a' < str[i] && 'z' > str[i]) || ('A' < str[i] && 'Z' > str[i]))
        {}
        else {
            return 0;
        }
        i++;
    }
    return 1;
}
