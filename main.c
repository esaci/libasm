/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:45:59 by elias             #+#    #+#             */
/*   Updated: 2021/04/10 14:41:25 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

void	test_ft_read()
{
	int		fd;
	int		ret;
	size_t	count;
	char	str[100];
	char	filename[] = "test_read";

	count = 50;
	ret = 0;
	printf("\033[0;34m");
	printf("----------FT_READ---------\n");
	printf("\033[0m");
	fd = open(filename, O_RDONLY);
	if (fd)
	{
		ret = ft_read(fd, str, count);
		if (ret == -1)
			printf("maaa fnction : %s\n", strerror(errno));
		else
			printf("maaa fnction : %s\n", str);
		ret = read(fd, str, count);
		if (ret == -1)
			printf("vrai fnction : %s\n", strerror(errno));
		else
			printf("vrai fnction : %s\n", str);
	}
	else
	{
		printf("Error: fd (read)\n");
	}
	printf("\n\n\n");
}


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

void	test_ft_write()
{
	int		fd;
	size_t	count;
	int		ret;
	char	str[] = "ok";
	char	filename[] = "test_write";

	count = 2;
	ret = 0;
	printf("\033[0;34m");
	printf("---------FT_WRITE---------\n");
	printf("\033[0m");
	fd = open(filename, O_WRONLY);
	if (fd)
	{
		ret = ft_write(fd, str, count);
		close(fd);
		if (ret == -1)
			printf("%s\n", strerror(errno));
		else
			printf("open test_write to see the changes\n");
	}
	else
	{
		printf("Error: fd (write)\n");
	}
	printf("\n\n\n");
}

void	test_ft_strdup()
{
	char	str[] = "Hello World\n";
	char	str2[] = "HELLO WORLD";
	char	str3[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum";
	char	str4[0];
	char	*s1;
	char	*s1o;
	char	*s2;
	char	*s2o;
	char	*s3;
	char	*s3o;
	char	*s4;
	char	*s4o;

	s1 = NULL;
	s1o = NULL;
	s2 = NULL;
	s2o = NULL;
	s3 = NULL;
	s3o = NULL;
	s4 = NULL;
	s4o = NULL;
	printf("ft_strdup\n");
	printf("\n");
	s1 = ft_strdup(str);
	s1o = strdup(str);
	s2 = ft_strdup(str2);
	s2o = strdup(str2);
	s3 = ft_strdup(str3);
	s3o = strdup(str3);
	s4 = ft_strdup(str4);
	s4o = strdup(str4);
	printf("Vrai fnction |%s|\nMa fnction : |%s|\noriginal : |%s|\n\n",str, s1, s1o);
	printf("Vrai fnction |%s|\nMa fnction : |%s|\noriginal : |%s|\n\n",str2, s2, s2o);
	printf("Vrai fnction |%s|\nMa fnction : |%s|\noriginal : |%s|\n\n",str3, s3, s3o);
	printf("Vrai fnction |%s|\nMa fnction : |%s|\noriginal : |%s|\n\n",str4, s4, s4o);
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
		else if (!strcmp(argv[1], "write"))
			test_ft_write();
		else if (!strcmp(argv[1], "read"))
			test_ft_read();
		else if (!strcmp(argv[1], "strdup"))
			test_ft_strdup();
	}
	return (1);
}