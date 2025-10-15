/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:41:47 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/15 14:02:37 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void test_atoi(void) {
	printf("\nft_atoi(\"42\") = %d\n", ft_atoi("42"));
	printf("ft_atoi(\"13 13\") = %d\n", ft_atoi("13 13"));
}

void test_bzero(void) {
	char str[] = "Hello, World!";
	printf("\nString: %s", str);
	ft_bzero(str, 3);
	printf("\nft_bzero(buffer, 3) = %s\n", str);
}

void test_calloc(void) {
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

void test_isalnum(void) {
	printf("\nft_isalnum('a') = %d\n", ft_isalnum('a'));
	printf("ft_isalnum('#') = %d\n", ft_isalnum('#'));
}

void test_isalpha(void) {
	printf("\nft_isalpha('Z') = %d\n", ft_isalpha('Z'));
	printf("ft_isalpha('9') = %d\n", ft_isalpha('9'));
}

void test_isascii(void) {
	printf("\nft_isascii(127) = %d\n", ft_isascii(127));
	printf("ft_isascii(200) = %d\n", ft_isascii(200));
}

void test_isdigit(void) {
	printf("\nft_isdigit('5') = %d\n", ft_isdigit('5'));
	printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));
}

void test_isprint(void) {
	printf("\nft_isprint('A') = %d\n", ft_isprint('A'));
	printf("ft_isprint('\\n') = %d\n", ft_isprint('\n'));
}

void test_memchr(void) {
	char s[] = "Hello, World!";
	printf("\nft_memchr(\"hello\", 'e', 5) = %s\n",
	(char *)ft_memchr(s, 'e', 5));
}

void test_memcmp(void) {
	char a[] = "Hello, World!";
	char b[] = "Hello, World!";
	printf("\nft_memcmp(\"abc\", \"abd\", 3) = %d\n", ft_memcmp(a, b, 3));
}

void test_memcpy(void) {
	char src[] = "Hello, World!";
    char dest[13];
    ft_memcpy(dest, src, 6);
    printf("\nSrc = \"%s\"\n", src);
    printf("ft_memcpy(dest, src, 6)\ndest = \"%s\"\n", dest);
}

void test_memmove(void) {
	char str[] = "Hello, World!";

	printf("\nstr = \"%s\"\n", str);
	ft_memmove(str + 2, str, 4);
	printf("ft_memmove(str + 2, str, 4)\nstr = \"%s\"\n", str);
}

void test_memset(void) {
	char str[] = "Hello, World!";
	ft_memset(str, 'x', 3);
	printf("\nft_memset: str = \"%s\"\n", str);
}

void test_strchr(void) {
	printf("\nft_strchr(\"hello\", 'l') = %s\n", ft_strchr("hello", 'l'));
}

void test_strdup(void) {
	char *copy = ft_strdup("libft");
	printf("\nft_strdup(\"libft\") = \"%s\"\n", copy);
	free(copy);
}

void test_strlcat(void) {
	char dest[10] = "abc";
	printf("\nft_strlcat: result = %u\n", ft_strlcat(dest, "defgh", 10));
	printf("ft_strlcat: dest = \"%s\"\n", dest);
}

void test_strlcpy(void) {
	char dest[10];
	printf("\nft_strlcpy: result = %u\n", ft_strlcpy(dest, "libft", 10));
	printf("ft_strlcpy: dest = \"%s\"\n", dest);
}

void test_strlen(void) {
	printf("\nft_strlen(\"42\") = %u\n", ft_strlen("42"));
}

void test_strncmp(void) {
	printf("\nft_strncmp(\"abc\", \"abd\", 3) = %d\n", ft_strncmp("abc", "abd", 3));
}

void test_strnstr(void) {
	printf("\nft_strnstr(\"hello world\", \"world\", 11) = %s\n", ft_strnstr("hello world", "world", 11));
}

void test_strrchr(void) {
	printf("\nft_strrchr(\"banana\", 'a') = %s\n", ft_strrchr("banana", 'a'));
}

void test_substr(void) {
	char *sub = ft_substr("libft", 2, 3);
	printf("\nft_substr(\"libft\", 2, 3) = \"%s\"\n", sub);
	free(sub);
}

void test_tolower(void) {
	printf("\nft_tolower('A') = %c\n", ft_tolower('A'));
}

void test_toupper(void) {
	printf("\nft_toupper('a') = %c\n", ft_toupper('a'));
}

int main(void) {
	int chose;

	while (1) {
		printf("\n============= Menu de Testes Libft =============\n\n");
		printf(" 1. atoi      11. memcpy     21. strrchr\n");
		printf(" 2. bzero     12. memmove    22. substr\n");
		printf(" 3. calloc    13. memset     23. tolower\n");
		printf(" 4. isalnum   14. strchr     24. toupper\n");
		printf(" 5. isalpha   15. strdup     25. \n");
		printf(" 6. isascii   16. strlcat    26. \n");
		printf(" 7. isdigit   17. strlcpy    27. \n");
		printf(" 8. isprint   18. strlen     28. \n");
		printf(" 9. memchr    19. strncmp    29. \n");
		printf("10. memcmp    20. strnstr    30. \n");
		printf("\n0. Sair\n");
		printf("\nEscolha uma opção: ");
		scanf("%d", &chose);

		switch (chose) {
			case 1:  test_atoi(); break;
			case 2:  test_bzero(); break;
			case 3:  test_calloc(); break;
			case 4:  test_isalnum(); break;
			case 5:  test_isalpha(); break;
			case 6:  test_isascii(); break;
			case 7:  test_isdigit(); break;
			case 8:  test_isprint(); break;
			case 9:  test_memchr(); break;
			case 10: test_memcmp(); break;
			case 11: test_memcpy(); break;
			case 12: test_memmove(); break;
			case 13: test_memset(); break;
			case 14: test_strchr(); break;
			case 15: test_strdup(); break;
			case 16: test_strlcat(); break;
			case 17: test_strlcpy(); break;
			case 18: test_strlen(); break;
			case 19: test_strncmp(); break;
			case 20: test_strnstr(); break;
			case 21: test_strrchr(); break;
			case 22: test_substr(); break;
			case 23: test_tolower(); break;
			case 24: test_toupper(); break;
			case 0: printf("Encerrando...\n"); return 0;
			default: printf("Opção inválida!\n");
		}
	}
}
