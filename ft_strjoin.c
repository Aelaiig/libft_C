/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aweiler <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 21:06:15 by aweiler      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 21:06:15 by aweiler     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*str1;
	char	*str2;
	size_t	size;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (s1 && s2)
	{
		size = ft_strlen(str1) + ft_strlen(str2);
		if (!(str = (char *)malloc(sizeof(*str) * (size + 1))))
			return (NULL);
		str[0] = '\0';
		str = ft_strcat(str, str1);
		str = ft_strcat(str, str2);
		return (str);
	}
	return (0);
}
