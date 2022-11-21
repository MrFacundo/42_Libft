#include "libft.h"


size_t  strstart(char const *s, char const *set)
{
    size_t  i;
    size_t  j;
    
    j = 0;
    i = 0;
    while (set[j])
	{
        while (s[i])
        {
            if (s[i] != set[j])
                return (i);
            i++;
        }
		j++;
        i = 0;
	}
    return (i);
}





char    *ft_strtrim(char const *s1, char const *set)
{
	char    *buffer;
    size_t  i;
    size_t  j;

    buffer =  (char *)malloc(size_of(*buffer) * strstart(s1, set) + strend(s1, set) + 1);
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