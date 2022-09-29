//#include "libft.h"
#include <stddef.h>

size_t  strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int j;
	int	dest_len;

	i = 0;
	j = 0;
	dest_len = ft_strlen(dest);
	if (size <= 0)
	{
		dest[0] = 0;
		return (dest_len)
	}
	else
	{
		
	}
	
}

/*
dst et src doivent etre NULL terminated ( voir man)

strlcat renvoi la longueur totale de la strings qu'il a tenté de créer.
En comptant le NB ?
si size negatif :
	dst est NT ✅
	src est NT ✅
	renvois 
strlcat() take the full size of the buffer (not just the length)
and guarantee to NUL-terminate the result 
(as long as size is larger than 0 or, in the case of strlcat(), 
as long as there is at least one byte free in dst).
 */