/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isblankn.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aweiler <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 21:06:14 by aweiler      #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 21:06:14 by aweiler     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_isblankn(int c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}
