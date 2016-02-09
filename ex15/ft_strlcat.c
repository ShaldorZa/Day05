/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 08:12:27 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/09 08:24:38 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int 		ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		index;
	int		count;

	index = 0;
	count = 0;
	
	while (dest[count])
	{
		count++;
	}

	while (src[index] && index <= size)
	{
		dest[count] = src[index];
		count++;
		index++;
	}
	
	dest[count] = '\0';
	return (count);
}
