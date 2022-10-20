#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_l;
	size_t	src_l;

	if (!size)
		return 0;
	src_l = ft_strlen(src);
	dst_l = ft_strlen(dst);
	j = dst_l;
	i = 0;
	if (dst_l < size && size > 0)
	{
		while (src[i] && dst_l + i < size - 1)
		{
				dst[j] = src[i];
				j++;
				i++;
		}
		dst[j] = 0;
	}
	if (dst_l >= size)
		dst_l = size;
	return (dst_l + src_l);
}