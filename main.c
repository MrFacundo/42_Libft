#include <stdio.h>
#include "libft.h"

int main(void)
{
    char str[50];

    strcpy(str, "This is string.h library function");
    puts(str);

    ft_memset(str, '$', 7);
    puts(str);
    return (0);
}