/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/02 11:04:19 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/06 12:21:23 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
LOGIC
	1. loop1: count how many substrings
	2. loop2: finding the word length: start and end
		- allocate the word
		- copy the characters
	3. extract each substring
		- allocate the array of pointers
		- malloc and free array

*/

#include "libft.h"

static	int		count_substr(char const *s, char c);
static	size_t	substr_len(char const *s, char c);
static	void		free_all(char **arr, size_t j);

char	**ft_split(char const *s, char c)
{
	char			**result;
	int				n_substr;
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	n_substr = count_substr(s, c);
	result = malloc((n_substr + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			result[j] = ft_substr(s, i, substr_len(s + i, c));
			if (!result[j++])
				free_all(result, j - 1);
			i += substr_len(s + i, c);
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

static	int	count_substr(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			n++;
		i++;
	}
	return (n);
}

static	size_t	substr_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static	void	free_all(char **arr, size_t j)
{
	while (j > 0)
	{
		j--;
		free(arr[j]);
	}
	free(arr);
}

/* int main()
{
	char const	s[] = "Hi, test, hhh";
	char		c = ',';
	char **words = ft_split(s, c);

	//test funtion count:
	int cnt = count_substr(s, c)
	printf("%i\n", cnt);
	
	//test funciton length substring
	printf("%zu\n", substr_len(s, c));
	
	//test if split works
	for (int i = 0; i < cnt; i++)
	{
		printf("%s\n", words[i]);
	}
} */