/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 07:32:02 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/09 06:28:35 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n);

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
    int		index;
    int		index1;
    
    index = 0;
    index1 = 0;
    
    while (src[index] != '\0')
    {
        index++;
    }
    
    if (index == n)
    {
        while (src[index1] <= index)
        {
            dest[index1] = src[index1];
            index1++;
        }
    }
    else if (index < n)
    {
        while (src[index1] <= n)
        {
            dest[index1] = src[index1];
            index1++; 
        }   
        while (src[index1] > n)
        {
            dest[index1] = '\0';
            index1++;
        }
    }
    return (dest);
}
