/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 07:15:34 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/09 07:23:19 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str);

int		ft_str_is_uppercase(char *str)
{
	int		index;

	if (str[0] == '\0')
	{
		return (1);
	}

	index = 0;

	while (str[index] != '\0')
	{
		if (str[index] <= 'A' || str[index] >= 'Z')
		{
			return (0);
		}

		index++;
	}

	return (1);

}
