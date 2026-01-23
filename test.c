#include "libft.h"
#include <stdio.h>

void	test_strchr(void)
{
	char	str[] = "MERHABA";
	char	*p;

	p = ft_strchr(str, 'h');
	if (p)
		printf("Bulundu: %s\n", p);
	else
		printf("Bulunamadı\n");
	p = ft_strchr(str, '\0');
	if (p)
		printf("Null bulundu: pozisyon %ld\n", p - str);
}
void	test_strncmp(void)
{
	char	s1[] = "emre";
	char	s2[] = "emir";

	printf("%d\n", ft_strncmp(s1, s2, 4));
}

void	test_tolower(void)
{
	char	c;

	c = 'A';
	printf("%c", ft_toupper(c));
}

void	test_toupper(void)
{
	char	c;

	c = 'a';
	printf("%c", ft_toupper(c));
}

void	test_striteri()
{
	char	name[] = "Emrullah";

	ft_striteri(name, (void *)ft_tolower);
	printf("%s", name);
}
int	main(void)
{
	// test_strchr();
	// test_strncmp();
	// test_tolower();
	// test_toupper();
	test_striteri();
	return (0);
}
