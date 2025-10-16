/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:41:47 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/17 00:29:27 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_atoi(void)
{
	printf("\nft_atoi(\"42\") = %d\n", ft_atoi("42"));
	printf("ft_atoi(\"13 13\") = %d\n", ft_atoi("13 13"));
}

void	test_bzero(void)
{
	char	str[] = "Hello, World!";

	printf("\nString: %s", str);
	ft_bzero(str, 3);
	printf("\nft_bzero(buffer, 3) = %s\n", str);
}

void	test_calloc(void)
{
	int	size;
	int *arr;

	size = 13;
	arr = ft_calloc(size, sizeof(int));
	printf("\nft_calloc(4, sizeof(int)) = ");
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
	char s[] = "Hello, World!";
	printf("\nft_memchr(\"hello\", 'e', 5) = %s\n",
	(char *)ft_memchr(s, 'e', 5));
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
	printf("\nSrc = \"%s\"\n", src);
	printf("ft_memcpy(dest, src, 6)\ndest = \"%s\"\n", dest);
}

void	test_memmove(void)
{
	char str[] = "Hello, World!";

	printf("\nstr = \"%s\"\n", str);
	ft_memmove(str + 2, str, 4);
	printf("ft_memmove(str + 2, str, 4)\nstr = \"%s\"\n", str);
}

void	test_memset(void)
{
	char str[] = "Hello, World!";
	ft_memset(str, 'x', 3);
	printf("\nft_memset: str = \"%s\"\n", str);
}

void	test_split()
{
	char	str[13] = "Hello, World!";
	char	**arr = ft_split(str, ' ');
	printf("ft_split(\"Hello, Wprld!\", \" \")");
	for (int i = 0; arr[i] != NULL; i++)
		printf("%s\n", arr[i]);
}

void	test_strchr(void)
{
	printf("\nft_strchr(\"hello\", 'l') = %s\n", ft_strchr("hello", 'l'));
}

void	test_strdup(void)
{
	char *str = ft_strdup("libft");
	printf("\nft_strdup(\"libft\") = \"%s\"\n", str);
	free(str);
}

void	test_strjoin(void)
{
	char	*str = ft_strjoin("Hello, ", "World!");
	printf("\nft_strjoin(\"Hello, \", \"World!\") = %s\n", str);
	free(str);
}

void	test_strlcat(void)
{
	char dest[130] = "Hello, ";
	char str[130] = "World!";
	printf("\ndest = \"%s\"\n", dest);
	printf("src = \"%s\"\n", str);
	printf("\nft_strlcat(str, \"World!\", 13) = \"%ld\"\n", ft_strlcat(dest, str, 13));
	printf("\ndest + src = %s\n", dest);
}

void	test_strlcpy(void)
{
	char str[10];
	printf("\nft_strlcpy(str, \"libft\", 10) = %lu\n", ft_strlcpy(str, "libft", 10));
	printf("dest = \"%s\"\n", str);
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
	printf("\nft_strnstr(\"hello world\", \"world\", 11) = %s\n", ft_strnstr("Hello, World!", "World!", 11));
}

void	test_strrchr(void)
{
	printf("\nft_strrchr(\"banana\", 'a') = %s\n", ft_strrchr("banana", 'a'));
}

void	test_strtrim(void)
{
	char *str = ft_strtrim("Hello, World!", ",");
	printf("\nft_strtrim(\"Hello, World!\", \",\") = %s\n", str);
	printf("\nstr_len = %d\n", ft_strlen(str));
	free(str);
}

void	test_substr(void)
{
	char *str = ft_substr("Hello, World!", 7, 6);
	printf("\nft_substr(\"Hello, World!\", 7, 6) = \"%s\"\n", str);
	free(str);
}

void	test_tolower(void)
{
	printf("\nft_tolower('A') = %c\n", ft_tolower('A'));
}

void	test_toupper(void)
{
	printf("\nft_toupper('a') = %c\n", ft_toupper('a'));
}

void recompilar_binario() {
    system("make re"); 
    system("cc -Ilibft main.c libft.a -o test"); 
}

void executar_teste(void (*func)()) {
    printf("\n==================== Output ====================\n");
    func();
    printf("\nPressione Enter para continuar...");
    getchar(); getchar();
    system("clear");
}

int main(void) {
	int chose;

	while (1) {
		printf("\n============= Menu de Testes Libft =============\n\n");
		printf(" 1. atoi      11. memcpy     21. strrchr\n");
		printf(" 2. bzero     12. memmove    22. substr\n");
		printf(" 3. calloc    13. memset     23. tolower\n");
		printf(" 4. isalnum   14. strchr     24. toupper\n");
		printf(" 5. isalpha   15. strdup     25. strjoin\n");
		printf(" 6. isascii   16. strlcat    26. strtrim\n");
		printf(" 7. isdigit   17. strlcpy    27. split\n");
		printf(" 8. isprint   18. strlen     28. \n");
		printf(" 9. memchr    19. strncmp    29. \n");
		printf("10. memcmp    20. strnstr    30. \n");
		printf("\n0. Sair\n");
		printf("\nEscolha uma opção: ");
		scanf("%d", &chose);

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
			case 22: executar_teste(test_substr); break;
			case 23: executar_teste(test_tolower); break;
			case 24: executar_teste(test_toupper); break;
			case 25: executar_teste(test_strjoin); break;
			case 26: executar_teste(test_strtrim); break;
			case 27: executar_teste(test_split); break;
			case 28: executar_teste(test_toupper); break;
			case 29: executar_teste(test_toupper); break;
			case 30: executar_teste(test_toupper); break;
			case 0:	printf("Encerrando...\n");	return 0;
			default: printf("Opção inválida!\n");
		}
	}
}