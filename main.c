/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:41:47 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/21 15:57:17 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Part 1
void	test_atoi(void)
{
	printf("\nft_atoi(\"42\") = %d\n", ft_atoi(" 42"));
	printf("ft_atoi(\"13 13\") = %d\n", ft_atoi(" 13 13"));
}

void	test_bzero(void)
{
	char	str[] = "Hello, World!";

	printf("\nstr = \"%s\"", str);
	ft_bzero(str, 3);
	printf("\nft_bzero(buffer, 3) = %s\n", str);
}

void	test_calloc(void)
{
	int	size;
	int *arr;

	size = 13;
	arr = ft_calloc(size, sizeof(int));
	printf("\nft_calloc(%d, sizeof(int)) = ", size);
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
	free(arr);
}

void	test_isalnum(void)
{
	printf("\nft_isalnum('a') = %d\n", ft_isalnum('a'));
	printf("ft_isalnum('#') = %d\n", ft_isalnum('#'));
}

void	test_isalpha(void)
{
	printf("\nft_isalpha('Z') = %d\n", ft_isalpha('Z'));
	printf("ft_isalpha('9') = %d\n", ft_isalpha('9'));
}

void	test_isascii(void)
{
	printf("\nft_isascii(127) = %d\n", ft_isascii(127));
	printf("ft_isascii(200) = %d\n", ft_isascii(200));
}

void	test_isdigit(void)
{
	printf("\nft_isdigit('5') = %d\n", ft_isdigit('5'));
	printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));
}

void	test_isprint(void)
{
	printf("\nft_isprint('A') = %d\n", ft_isprint('A'));
	printf("ft_isprint('\\n') = %d\n", ft_isprint('\n'));
}

void	test_memchr(void)
{
	char str[13] = "Hello, World!";
	printf("\nft_memchr(\"%s\", 'e', 5) = \"%s\"\n", str, ft_memchr(str, 'e', 5));
}

void	test_memcmp(void)
{
	char a[] = "Hello, World!";
	char b[] = "Hello, World!";
	printf("\nft_memcmp(\"abc\", \"abd\", 3) = %d\n", ft_memcmp(a, b, 3));
}

void	test_memcpy(void)
{
	char src[] = "Hello, World!";
	char dest[13];
	ft_memcpy(dest, src, 6);
	printf("\nsrc = \"%s\"\n", src);
	printf("ft_memcpy(dest, src, 6)\n");
	printf("dest = \"%s\"\n", dest);
}

void	test_memmove(void)
{
	char	str[50] = "Hello, World!";
	printf("\nstr = \"%s\"\n", str);
 	printf("ft_memmove(str + 7, str, 5)");
	ft_memmove(str + 7, str, 5);
	printf("\ndest = \"%s\"\n", str);
}

void	test_memset(void)
{
	char	str[] = "Hello, World!";
	printf("\nstr before ft_memset = \"%s\"\n", str);
	printf("ft_memset(str, '-', 3)\n");
	ft_memset(str, '-', 3);
	printf("str after ft_memset = \"%s\"\n", str);
}

void	test_strchr(void)
{
	char	*str = "Hewllo, World!";
	int		c = 'W';
	printf("\nft_strrchr(\"%s\", \'%c\') = %s\n", str, c, ft_strchr(str, c));
}

void	test_strdup(void)
{
	char str[13] = "Hello, World!";
	char *dest = ft_strdup(str);
	printf("\nstr = \"%s\"\n", str);
	printf("ft_strdup(str)\n");
	printf("dest = \"%s\"\n", dest);
	free(dest);
}

void	test_strlcat(void)
{
	char dest[130] = "Hello, ";
	char str[130] = "World!";
	printf("\ndest = \"%s\"\n", dest);
	printf("src = \"%s\"\n", str);
	printf("\nft_strlcat(dest, str, 13) = %ld\n", ft_strlcat(dest, str, 13));
	printf("\ndest + src = \"%s\"\n", dest);
}

void	test_strlcpy(void)
{
	char str[14] = "Hello, World!";
	char dest[13];
	printf("\nstr = \"%s\"", str);
	printf("\nft_strlcpy(dest, str, 13) = %lu\n", ft_strlcpy(dest, str, 13));
	printf("dest = \"%s\"\n", dest);
}

void	test_strlen(void)
{
	printf("\nft_strlen(\"42\") = %u\n", ft_strlen("42"));
}

void	test_strncmp(void)
{
	printf("\nft_strncmp(\"abc\", \"abd\", 3) = %d\n", ft_strncmp("abc", "abd", 3));
}

void	test_strnstr(void)
{
	char	str[14] = "HWello, World!";
	char	to_find[13] = "Wo";
	char	*dest = ft_strnstr(str, to_find, 13);
	printf("\nstr = \"%s\"\n", str);
	printf("to_find = \"%s\"\n", to_find);
	printf("\nft_strnstr(str, to_find, 13)\n");
	printf("dest = \"%s\"\n", dest);
}

void	test_strrchr(void)
{
	char	*str = "Hello, World!";
	int		c = 'W';
	printf("\nft_strrchr(\"%s\", \'%c\') = %s\n", str, c, ft_strrchr(str, c));
}

void	test_tolower(void)
{
	printf("\nft_tolower('A') = %c\n", ft_tolower('A'));
}

void	test_toupper(void)
{
	printf("\nft_toupper('a') = %c\n", ft_toupper('a'));
}

//Part 2
void	test_substr(void)
{
	char *str = ft_substr("Hello, World!", 7, 10);
	printf("\nft_substr(\"Hello, World!\", 7, 10) = \"%s\"\n", str);
	free(str);
}

void	test_strjoin(void)
{
	char	*str = ft_strjoin("Hello, ", "World!");
	printf("\nft_strjoin(\"Hello, \", \"World!\") = %s\n", str);
	free(str);
}

void	test_strtrim(void)
{
	char	*str = "Hello, World!";
	char	*set = "Helo, ";
	char	*str_trim = ft_strtrim(str, set);

	printf("ft_strtrim(\"%s\", \"%s\"): \"%s\"\n", str, set, str_trim);
	free(str_trim);
}

void	test_split(void)
{
	char	str[] = "Hello, World!";
	char	c = ' ';
	char	**arr = ft_split(str, c);
	printf("\nft_split(\"%s\", \"%c\")", str, c);
	printf("\n");
	for (int i = 0; arr[i] != NULL; i++)
		printf("%d - %s\n", i, arr[i]);
	for (int i = 0; arr[i] != NULL; i++)
		free(arr[i]);
	free(arr);
}

void	test_itoa(void)
{
	printf("\nft_itoa(0): %s", ft_itoa(0));
	printf("\nft_itoa(13): %s", ft_itoa(13));
	printf("\nft_itoa(-13): %s\n", ft_itoa(-13));
}

//test_strmapi
char	transform_char(unsigned int i, char c)
{
	if (i % 2 == 0)
		return ft_toupper(c);
	else
		return ft_tolower(c);
}

void	test_strmapi(void)
{
	const char *str = "Hello, World!";
	char *dest;
	dest = ft_strmapi(str, transform_char);
	printf("\nBefore ft_strmapi = \"%s\"\n", str);
	printf("ft_strmapi(src, transform_char)\n");
	printf("After ft_strmapi = \"%s\"\n", dest);
	free(dest);
}

//test_striteri
void	to_upper(unsigned int i, char *c)
{
	if (c[i] >= 'a' && c[i] <= 'z')
		c[i] -= 32;
}

void	test_striteri(void)
{
	char	str[] = "Hello, World!";
	printf("\nBefore ft_striteri = \"%s\"", str);
	printf("\nft_striteri(str, to_upper)\n");
	ft_striteri(str, to_upper);
	printf("After ft_striteri = \"%s\"\n", str);
}

void	test_putchar_fd(void)
{
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd != -1)
	{
		ft_putchar_fd('A', fd);
		close(fd);
	}
	printf("\nft_putchar_fd('A', fd)\n\n");
	printf("output.txt: ");
	fflush(stdout);
	system("cat output.txt");
	printf("\n");
}

void	test_putstr_fd(void)
{
	int	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd != -1)
	{
		ft_putstr_fd("Hello, World!", fd);
		close(fd);
	}
	printf("\nft_putstr_fd(\"Hello, World!\", fd)\n\n");
	printf("output.txt: ");
	fflush(stdout);
	system("cat output.txt");
	printf("\n");
}

void	test_putendl_fd(void)
{
	int	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd != -1)
	{
		ft_putendl_fd("Hello, World!", fd);
		close(fd);
	}
	printf("\nft_putendl_fd(\"Hello, World!\", fd)\n\n");
	printf("output.txt: ");
	fflush(stdout);
	system("cat output.txt");
}

void	test_putnbr_fd(void)
{
	int	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd != -1)
	{
		ft_putnbr_fd(-13, fd);
		close(fd);
	}
	printf("\nft_putstr_fd(-13, fd)\n\n");
	printf("output.txt: ");
	fflush(stdout);
	system("cat output.txt");
	printf("\n");
}

//Main
void	imprimir_menu()
{
	printf("\n============= Menu de Testes Libft =============\n");
	printf("\n==================== Part 1 ====================\n\n");
	printf("   1. atoi       9. memchr     17. strlcpy\n");
	printf("   2. bzero     10. memcmp     18. strlen\n");
	printf("   3. calloc    11. memcpy     19. strncmp\n");
	printf("   4. isalnum   12. memmove    20. strnstr\n");
	printf("   5. isalpha   13. memset     21. strrchr\n");
	printf("   6. isascii   14. strchr     22. tolower\n");
	printf("   7. isdigit   15. strdup     23. toupper\n");
	printf("   8. isprint   16. strlcat\n");
	printf("\n==================== Part 2 ====================\n\n");
	printf("  24. substr    28. itoa       32. putstr_fd\n");
	printf("  25. strjoin   29. strmapi    33. putendl_fd\n");
	printf("  26. strtrim   30. striteri   34. putnbr_fd\n");
	printf("  27. split     31. putchar_fd   \n");
	printf("\n================================================\n");

	printf("\n   0. Sair\n");
}

void	executar_teste(void (*func)())
{
	printf("\033[H\033[J");
	imprimir_menu();
	printf("\n==================== Output ====================\n");
	func();
	printf("\n================================================\n");
	printf("\nEscolha uma opção: ");
}

int	main(void) {
	int chose;

	imprimir_menu();
	printf("\nEscolha uma opção: ");

	while (scanf("%d", &chose) == 1) {
		int c;
		while ((c = getchar()) != '\n' && c != EOF);

		switch (chose) {
			case 1:  executar_teste(test_atoi); break;
			case 2:  executar_teste(test_bzero); break;
			case 3:  executar_teste(test_calloc); break;
			case 4:  executar_teste(test_isalnum); break;
			case 5:  executar_teste(test_isalpha); break;
			case 6:  executar_teste(test_isascii); break;
			case 7:  executar_teste(test_isdigit); break;
			case 8:  executar_teste(test_isprint); break;
			case 9:  executar_teste(test_memchr); break;
			case 10: executar_teste(test_memcmp); break;
			case 11: executar_teste(test_memcpy); break;
			case 12: executar_teste(test_memmove); break;
			case 13: executar_teste(test_memset); break;
			case 14: executar_teste(test_strchr); break;
			case 15: executar_teste(test_strdup); break;
			case 16: executar_teste(test_strlcat); break;
			case 17: executar_teste(test_strlcpy); break;
			case 18: executar_teste(test_strlen); break;
			case 19: executar_teste(test_strncmp); break;
			case 20: executar_teste(test_strnstr); break;
			case 21: executar_teste(test_strrchr); break;
			case 22: executar_teste(test_tolower); break;
			case 23: executar_teste(test_toupper); break;
			case 24: executar_teste(test_substr); break;
			case 25: executar_teste(test_strjoin); break;
			case 26: executar_teste(test_strtrim); break;
			case 27: executar_teste(test_split); break;
			case 28: executar_teste(test_itoa); break;
			case 29: executar_teste(test_strmapi); break;
			case 30: executar_teste(test_striteri); break;
			case 31: executar_teste(test_putchar_fd); break;
			case 32: executar_teste(test_putstr_fd); break;
			case 33: executar_teste(test_putendl_fd); break;
			case 34: executar_teste(test_putnbr_fd); break;
			case 0:
				printf("\nEncerrando...\n");
				return 0;
			default:
				printf("\nOpção inválida!\n");
				printf("\nEscolha uma opção: ");
				break;
		}
	}
	return 0;
}
