/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_aplha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 12:36:45 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/08 13:01:42 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str);

int		ft_str_is_alpha(char *str)
{
	int		index;

	if (str[0] == '\0')
	{
		return (1);
	}

	index = 0;

	while (str[index] != '\0')
	{
		if ((str[index] >= 'a' && str[index] <= 'z') || (str[index] >= 'A' && str[index] <= 'Z') || (str[index] >= '0' && str[index] <= '9'))
		{
			index++;
		}
		else
		{
			return (0);
		}
	}
	
	return (1);
}
