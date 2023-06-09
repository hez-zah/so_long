/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hez-zahi <hez-zahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:34:12 by hez-zahi          #+#    #+#             */
/*   Updated: 2022/11/14 14:41:23 by hez-zahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	j = ft_strlen(dst);
	k = ft_strlen(src);
	if (dstsize > j)
		l = j + k;
	else
		l = dstsize + k;
	i = 0;
	while (src[i] != '\0' && j + 1 < dstsize)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (l);
}
int main()
{
	char src[] = "jhfhje";
	printf("%zu", strlcat(NULL, src, 0));
}