/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_striteri.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aweiler <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 21:06:15 by aweiler      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/10 17:31:44 by aweiler     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, s + i);
			i++;
		}
	}
}
