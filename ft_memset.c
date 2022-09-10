#include <stddef.h>
#include <stdio.h> 

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char *ptr;
	size_t i;


	ptr = (unsigned char)pointer;
	i = 0;
	while (i < count)
	{
		ptr[i] = value;
		i++;
	}
}

int main()
{

	char str[50] = "Aticleworld is a programming Blog.";
	printf("\nBefore memset(): %s\n\n", str);
	// Fill 6 characters starting from str[11] with '*'
	ft_memset(str + 11, '*', 6);
	printf("After memset(): %s\n\n", str);
	return (0);
}
