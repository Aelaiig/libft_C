/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aweiler <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 21:06:15 by aweiler      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/08 14:03:14 by aweiler     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

static int	size_int(int n)
{
	long	nb;
	long	i;

	i = 0;
	nb = (long)n;
	i = 0;
	if (n < 0)
		nb = -nb;
	while (nb >= 10)
	{
		nb = nb / 10;
		i++;
	}
	if (nb <= 9)
		i++;
	if (n < 0)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	long	nb;
	long	size;

	size = size_int(n);
	if (!(str = (char *)malloc(sizeof((*str) * (size + 1)))))
		return (NULL);
	str[size] = '\0';
	nb = (long)n;
	if (n < 0)
		nb = -nb;
	size = size - 1;
	while (size >= 0)
	{
		str[size] = nb % 10 + 48;
		nb = nb / 10;
		size--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
