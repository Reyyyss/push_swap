/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcarrasq <hcarrasq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:16:25 by hcarrasq          #+#    #+#             */
/*   Updated: 2024/11/18 17:51:53 by hcarrasq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *phrase, char c, char	**newstr)
{
	size_t	i;
	size_t	count;

	count = 0;
	while (*phrase)
	{
		while (*phrase && *phrase == c)
			phrase++;
		if (*phrase)
		{
			i = 0;
			while (phrase[i] && phrase[i] != c)
				i++;
			if (i && newstr)
				newstr[count] = ft_substr(phrase, 0, i);
			count++;
			phrase += i;
		}
	}
	return (count);
}

void	*ft_free(char **str, size_t tmn)
{
	size_t	i;

	i = 0;
	while (i < tmn)
		free(str[i++]);
	return (free(str), NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**newstr;

	newstr = ft_calloc(count_words(s, c, NULL) + 1, sizeof(char *));
	count_words(s, c, newstr);
	return (newstr);
}
