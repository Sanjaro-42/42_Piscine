/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: esidelar <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/18 23:09:33 by esidelar     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 22:39:54 by esidelar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	char *s;

	i = 0;
	while (s[i] + 1)
		i++;
	if (!(s = (char **)malloc(sizeof(char) * 2)))
		return (NULL);
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	*src = '\0';
}
