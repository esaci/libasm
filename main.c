/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:45:59 by elias             #+#    #+#             */
/*   Updated: 2021/04/08 18:09:40 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

void	test_ft_strlen()
{
	char	str[] = "Elias S";
	char	str2[] = "";
	char	str3[] = "1234567891011121314151617181920";

	printf("ft_strlen\n");
	printf("%s\nft : %ld vs La fnction : %ld\n", str, ft_strlen(str), strlen(str));
	printf("%s\nft : %ld vs La fnction : %ld\n", str2, ft_strlen(str2), strlen(str2));
	printf("%s\nft : %ld vs La fnction : %ld\n", str3, ft_strlen(str3), strlen(str3));
	printf("\n\n\n");
}

void	test_ft_strcpy()
{
	char	src1[] = "SOURCE FOR STRCPY";
	char	src2[] = "source2 for strcpy";
	char	dest1[30];
	char	dest2[30];
	char	dest3[30];
	char	dest4[30];
	size_t	lensrc;
	size_t	lendest1;
	size_t	lendest2;
	char *str = NULL;

	printf("%s \n", ft_strcpy(str, src1));
	printf("\033[0;34m");
	printf("ft_strcpy\n");
	printf("\033[0m");
	printf("ft : |%s| vs La fnction : |%s|\n", ft_strcpy(dest1, src1), strcpy(dest2, src1));
	printf("ft : |%s| vs La fnction : |%s|\n", ft_strcpy(dest1, src2), strcpy(dest2, src2));
	printf("La fnction : |%s| - ft : |%s|\n", strcpy(dest4, src1), ft_strcpy(dest3, src1));
	printf("La fnction : |%s| - ft : |%s|\n", strcpy(dest4, src2), ft_strcpy(dest3, src2));
	printf("\n\n\n");
}

void	test_ft_strcmp()
{
	char	str[] = "Hello World";
	char	str2[] = "Hello World";
	char	str3[] = "..........";
	char	str4[] = "...........";

	printf("\033[0;34m");
	printf("ft_strcmp\n");
	printf("\033[0m");
	printf("comparing %s with %s\n", str, str2);
	printf("ft : |%d| ## original : |%d|\n\n", ft_strcmp(str, str2), strcmp(str, str2));
	printf("comparing %s with %s\n", str, str3);
	printf("ft : |%d| ## original : |%d|\n\n", ft_strcmp(str, str3), strcmp(str, str3));
	printf("comparing %s with %s\n", str3, str4);
	printf("ft : |%d| ## original : |%d|\n\n", ft_strcmp(str3, str4), strcmp(str3, str4));
	printf("comparing %s with %s\n", str, str);
	printf("ft : |%d| ## original : |%d|\n\n", ft_strcmp(str, str), strcmp(str, str));
	printf("original : |%d| ## ft : |%d|\n", strcmp(str, str2), ft_strcmp(str, str2));
	printf("original : |%d| ## ft : |%d|\n", strcmp(str, str3), ft_strcmp(str, str3));
	printf("original : |%d| ## ft : |%d|\n", strcmp(str3, str4), ft_strcmp(str3, str4));
	printf("original : |%d| ## ft : |%d|\n", strcmp(str, str), ft_strcmp(str, str));
	printf("\n\n\n");
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (!strcmp(argv[1], "strlen"))
			test_ft_strlen();
		else if (!strcmp(argv[1], "strcpy"))
			test_ft_strcpy();
		else if (!strcmp(argv[1], "strcmp"))
			test_ft_strcmp();
	}
	else
	{
		test_ft_strlen();
		test_ft_strcpy();
		test_ft_strcmp();
	}
	return (1);
}