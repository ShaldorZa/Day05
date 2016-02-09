/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 07:54:38 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/09 08:22:39 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncat(char *dest, char *src, int nb);

char		*ft_strncat(char *dest, char *src, int nb)
{
	int		index;
	int		count;

	index = 0;
	count = 0;

	while (dest[count])
	{
		count++;
	}

	while (src[index] && index <= nb)
	{
		dest[count] = src[index];
		count++;
		index++;
	}

	dest[count] = '\0';
	return (dest);
}
