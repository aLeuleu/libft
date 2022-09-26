#include <stdio.h>
#include <string.h>


void	*ft_memset(void *pointer, int value, size_t count);

int main()
{
    char str[50] = "Aticleworld is a programming Blog.";
    printf("\nBefore memset(): %s\n\n", str);
    // Fill 6 characters starting from str[11] with '*'
    ft_memset(str + 11, '*', 6);
    printf("After memset(): %s\n\n", str);
    return 0;
}
