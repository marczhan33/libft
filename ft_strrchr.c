/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhan <marczhan33@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 15:37:43 by mzhan             #+#    #+#             */
/*   Updated: 2021/02/03 21:38:12 by mzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	tmp_c;
	char	*tmp_s;
	int		i;
	char	*p;

	tmp_c = (char)c;
	tmp_s = (char *)s;
	i = 0;
	p = 0;
	while (tmp_s[i] != '\0')
	{
		if (tmp_s[i] == tmp_c)
			p = &tmp_s[i];
		i++;
	}
	if (tmp_s[i] == tmp_c)
		p = &tmp_s[i];
	return (p);
}
