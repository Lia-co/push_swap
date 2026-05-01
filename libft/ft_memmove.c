/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/20 16:41:05 by sliang        #+#    #+#                 */
/*   Updated: 2026/04/04 14:56:52 by sliang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
    copies n bytes from memory area src to memory area dest.
	The memory areas may overlap.
	The bytes in src are first copied --> temporary array --> dest.

RETURN VALUE
    The memmove() function returns a pointer to dest.
	
LOGIC
	1. check if dst or src is null; or move 0 byte
	2. check temporary array has enough space for the src
	3. if there is memory overlapping, copying from right to left
	4. if there no memory overlapping, copying from left to right
	5. copy srt to temporary array
	6. copy temporary array to dest 
*/

//how to make typecasting for this function?

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d_ptr;
	const char	*s_ptr;

	d_ptr = (char *)dst;
	s_ptr = (const char *)src;
	if (!dst || !src || len == 0)
		return (dst);
	if (d_ptr > s_ptr)
	{
		while (len > 0)
		{
			len--;
			d_ptr[len] = s_ptr[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/* int	main(void)
{
	char d_ptr1[6] = "12345";
	const char *s_ptr1 = &d_ptr1[2];
	char *str1 = ft_memmove(d_ptr1, s_ptr1, 5);

	char d_ptr2[6] = "12345";
	const char *s_ptr2 = &d_ptr2[2];
	char *str2 = memmove(d_ptr2, s_ptr2, 5);

	print_bytes(d_ptr1, 5);
	print_bytes((char *)s_ptr1, 3);
	print_bytes(str1, 5);
	print_bytes(str2, 5);
} */

/* int             main(int argc, const char *argv[])
{
	char    src[] = "lorem ipsum dolor sit amet";
	char    *dest;
    int             arg;
  
    dest = src + 1;
    if (dest != ft_memmove(dest, src, 8))
		write(1, "dest's adress was not returned\n", 31);
    write(1, dest, 22);
} */