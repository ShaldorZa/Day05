/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 09:30:07 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/08 12:04:28 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strupcase(char *str);

char		*ft_strupcase(char *str)
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
        if (str[index] >= 'a' && str[index] <= 'z')
            str[index] = str[index] - 32;
        index++;
    }
    return (str);
}
