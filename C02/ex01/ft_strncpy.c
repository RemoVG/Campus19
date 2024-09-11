/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-gas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:32:49 by rvan-gas          #+#    #+#             */
/*   Updated: 2024/09/11 14:54:13 by rvan-gas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int     main()
{
        char    src[] = "Emanuel";
        char    dest[] = "FhYjIkL";
        unsigned int    n = 4;

        printf("(Before)String src: %s\n",src);
        printf("(Before)String dest: %s\n",dest);
        ft_strncpy(dest, src, n);
        printf("------------------------------------------\n");
        printf("(After)String dest: %s\n",dest);
}*/
