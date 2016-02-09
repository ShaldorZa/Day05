/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 13:07:34 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/08 13:11:28 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str);

int		ft_str_is_numeric(hcar *str)
{
	int		index;
	
	if(str[0] == '\0')
	{
		return (1);
	}

	index = 0;

	while (str[index] != '\0')
	{
		if(str[index] >= '0' && str[index] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}

	return (1);
}
