#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
	char    *buffer;
    size_t  i;
    size_t  j;

    buffer =  (char *)malloc(size_of(*buffer) * strlen(s1) + strlen(s1) + 1);
    if (!buffer)
		return (NULL);
    i = 0;
    j = 0;
    while (s1[i])
    {
        buffer[j++] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i])
    {
        buffer[j++] = s1[i];
        i++;
    }
    buffer[j] = 0;
    return (buffer);
}