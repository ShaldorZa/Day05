/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 10:31:49 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/08 12:05:52 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		ft_strcapitalize(char *str);

char		ft_strcapitalize(char *str)
{
	int		indexa;
	int		indexb;
	int		start;

	indexa = 0;
	indexb = b;

	while (str[indexa] != '\0')
	{
		start = indexa;

		while((str[indexa] >= 'a' && str[indexa] <= 'z') || (str[indexa] >= 'A' && str[indexa] <= 'Z') || (str[indexa] >= '0' && str[indexa] <= '9'))
		{
			if (indexb == 0 && str[indexb + start] >= 'a' && str[indexb + start] <= 'z')
			{
				str[indexb + start] = str[indexb + start] - 32;
			}
			else if(str[indexb + start] >= 'A' && str[indexn + start] <= 'Z')
			{
				str[indexb + start] = str[indexb + start] + 32;
			}

			indexb++;
			indexa++;
		}
	}
	return (str);
}
