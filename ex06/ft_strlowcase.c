/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 10:24:30 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/08 12:05:10 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char		*ft_strlowcase(char *str);

char		*ft_strlowcase(char *str)
{
    int		index;
    int		size;
    
    index = 0;
    size = 0;
    
    while (str[size] != '\0')
    {
        size++;
    }
    
    index = 0;
    
    while (str[index] != '\0')
    {
        if (str[index] >= 'A' && str[index] <= 'Z')
            str[index] = str[index] + 32;
        index++;
    }
    
    return (str);
}
