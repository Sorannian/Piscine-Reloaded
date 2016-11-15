#include <stdlib.h>

int	ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int i;
	char *dest;

	i = 0;
	dest = (char*)malloc(sizeof(char) * ft_strlen(src + 1));
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "Coucouilles";
	printf("%s\n", ft_strdup(src));
	printf("%s\n", strdup(src));
	return (0);
}
