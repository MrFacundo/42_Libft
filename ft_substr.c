#include "libft.h"

static char	*empty_string(void)
{
	char	*result;

	result = malloc(1);
	if (result)
		result[0] = 0;
	return (result);
}

static size_t	select_smallest(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num2);
	return (num1);
}

static char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{	
		dest[i] = 0;
		i++;
	}
	return (dest);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *  buffer;
    size_t  buffer_len;
    size_t  s_len;

    if (!s)
        return (NULL);
    s_len = ft_strlen(s);
    if (start >= s_len || len == 0)
        return (empty_string());
    buffer_len = select_smallest(ft_strlen(s + start), len);
    buffer = (char *)malloc(size_of(*buffer) * (buffer_len));
    if (!buffer)
		return (NULL);
    buffer = ft_strncpy(buffer, s + start, buffer_len);
    return (buffer);
}