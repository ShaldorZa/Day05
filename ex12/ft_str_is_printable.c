/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 07:23:59 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/09 07:39:11 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str);

int		ft_str_is_printable(char *str)
{
	int		index;

	if (str[index] == '\0')
	{
		return (1);
	}

	index = 0;

	while (str[index] != '\0')
	{
		if (str[index] <= ' ' || str[index] >= '~')
		{
			return (0);
		}

		index++;
	}
	return (1);
}
