/*
The function ft_strtrim copy the string s1 in new string,
remove the set of charactere at begining and end of s1.

Return the new trimmed string.
*/

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;
    size_t  len;

    start = 0;
    while (ft_strchr(set, s1[start]) != NULL)
        start++;
    end = 0;
    len = ft_strlen(s1) - 1;
    while (ft_strrchr(set, s1[len]) != NULL)
    {
        end++;
        len--;
    }
    if ((start == 0 && end == 0) || set == NULL)
        return (ft_strdup(s1));
    return (ft_substr(s1, start, (len - start + 1)));
}