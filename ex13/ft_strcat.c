/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 07:42:06 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/09 07:51:05 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char		*ft_strcat(char *dest, char *src);

char		*ft_strcat(char *dest, char *src)
{
	int		index;
	int		count;

	index = 0;
	count = 0;

	while (dest[count])
	{
		count++;
	}

	while (src[index])
	{
		dest[count] = src[index];
		count++;
		index++;
	}

	dest[count] = '\0';
	return (dest);
}
