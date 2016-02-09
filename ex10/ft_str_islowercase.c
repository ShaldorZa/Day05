/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_islowercase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 13:26:41 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/09 07:20:23 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str);

int		ft_str_is_lowercase(char *str)
{
	int		index;

	if (str[0] == '\0')
	{
		return (1);
	}

	index = 0;

	while (str[index] != '\0')
	{
		if (str[index] <= 'a' || str[index] >= 'z')
		{
			return (0);
		}
		
		index++;
	}
	return (1);
}
