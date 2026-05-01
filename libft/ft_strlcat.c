/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/23 15:29:56 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/04 16:22:19 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	The strlcat() function concatenate strings respectively. It is designed
	to be safer, more consistent, and less error prone replacements for
	strncat(3). strlcat() take the full size of the buffer (not just
	the length) and guarantee to NUL-terminate the result (as long as size is
	larger than 0 or, in the case of strlcat(), as long as there is at least
	one byte free in dst).  Note that a byte for the NUL should be included
	in size. strlcat() only operate on true “C” strings (NUL-terminated).

	The strlcat() function appends the NUL-terminated string src to the end
	of dst. It will append at most size: strlen(dst) - 1 bytes, NUL-termi‐
	nating the result.

RETURN VALUES
	strlcat() that means the initial length of dst plus the length of src.

	Note, if strlcat() traverses size characters without finding a NUL,
	the length of the string is considered to be size and the destination
	string will not be NUL-terminated (since there was no space for
	the NUL). This keeps strlcat() from running off the end of a string. In
	practice this should not happen (either size is incorrect
	or that dst is not a proper “C” string). The check exists to prevent
	potential security problems in incorrect code.

LOGIC
	1. get the full length of src and dst strings
	2. if the dst string's size doesn't have enough space, return the total
	length that it tried to create: initial dst length + src length.
	3. if the dst string has extra space, start to concatonate
	4. dst string ends with NUL-terminate
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (size == 0 || (size - 1) < d_len)
		return (size + s_len);
	j = 0;
	while ((size > d_len + 1 + j) && src[j] != '\0')
	{
		dst[d_len + j] = src[j];
		j++;
	}
	dst[d_len + j] = '\0';
	return (d_len + s_len);
}

/* int main(void)
{
	char 		sd1[] = "Hi ";
	const char	ss1[] = "Shiyuan";
	// char 		sd2[] = "Hi ";
	// const char	ss2[] = "Shiyuan";
	
	printf("before: %s, dst_len: %zu\n", sd1, strlen(sd1));
	printf("ft_strlcat: %zu\n", ft_strlcat(sd1, ss1, 10));
	printf("after: %s, dst_len: %zu\n", sd1, strlen(sd1));
	// printf("\n");
	// printf("before: %s, size: %zu\n", sd2, strlen(sd2));
	// printf("strlcat: %d\n", ft_strlcat(sd2, ss2, 6));
	// printf("after: %s, size: %zu\n", sd2, strlen(sd2));
} */