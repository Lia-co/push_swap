/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/23 14:52:01 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/04 15:52:09 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
    The strlcpy() copies strings respectively. It is designed to be safer, 
	more consistent, and less error prone replacements for strncpy. strlcpy() 
	take the full size of the buffer (not just the length) and guarantee to 
	NUL-terminate the result (as long as size is larger than 0 or as long as 
	there is at least one byte free in dst). Note that a byte for the NUL 
	should be included in size. Also note that strlcpy() only operate on true 
	“C” strings. This means that for strlcpy() src must be NUL-terminated.
RETURN VALUE
	The strlcpy() function return the total length of the src string it tried 
	to create.
LOGIC
	1. return the total length (total buffer?) of src str.
	2. copy the src str charaters to dst str.
	3. end with NUL-terminate for dst str.
QUESTION
	1.what is the argument size? what does it control?
	it controls how many size copy to dst string
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/* int	main(void)
{
	char dst[] = "Hello";
	const char src[] = "abcde";

	int i = ft_strlcpy(dst, src, 5);
	printf("%s\n", dst);
	printf("%s\n", src);
	print_bytes(dst, 6);
} */