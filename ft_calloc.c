/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hacharka <hacharka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:36:33 by hacharka          #+#    #+#             */
/*   Updated: 2024/11/23 13:04:37 by hacharka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*s;
	size_t		i;
	size_t		totalsize;

	if (size == 0 || count == 0)
	{
		s = malloc(0);
		return (s);
	}
	i = 0;
	totalsize = size * count;
	if (totalsize / size != count)
		return (NULL);
	s = malloc(totalsize);
	if (!s)
		return (NULL);
	while (i < totalsize)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
	return (s);
}
