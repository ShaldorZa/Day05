/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 07:35:08 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/09 06:43:39 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find);

char		*ft_strstr(char *str, char *to_find)
{
	int		index;
	int		count;
	int		index1;

	count = 0;

	while (to_find[count] != '\0')
	{
		count++;
	}

	if (count == 0)
	{
		return(str);
	}

	index = 0;
	index1 = 0;
	
	while (str[index] != '\0')
	{
		while (str[index + index1] == to_find[index1])
		{
			if (index1 == count - 1)
			{
				return (str + index);
			}

			index1++;
		}

		index1 = 0;
		index++;
	}

	return (0);
}
