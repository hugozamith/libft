/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteixeir <hteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:48:07 by hteixeir          #+#    #+#             */
/*   Updated: 2024/05/09 17:32:44 by hteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
ft_printf("%5%");
}



/*void	test_char()
{
	printf(Y"\tmine_CHARS=%d"RST"\n",
			ft_printf("This is a char "Y"[%c]"RST"\n", 'A'));
	printf(G"\treal_CHARS=%d"RST"\n\n",
			printf("This is a char "G"[%c]"RST"\n", 'A'));

	printf(Y"\tmine_CHARS=%d"RST"\n",
			ft_printf("This is a char "Y"[%10c]"RST"\n", 'A'));
	printf(G"\treal_CHARS=%d"RST"\n\n",
			printf("This is a char "G"[%10c]"RST"\n", 'A'));

	printf(Y"\tmine_CHARS=%d"RST"\n",
			ft_printf("This is a char "Y"[%-10c]"RST"\n", 'A'));
	printf(G"\treal_CHARS=%d"RST"\n\n",
			printf("This is a char "G"[%-10c]"RST"\n", 'A'));

	int	n = 10;
	printf(Y"\tmine_CHARS=%d"RST"\n",
			ft_printf("This is a char "Y"[%-*c]"RST"\n", n, 'A'));
	printf(G"\treal_CHARS=%d"RST"\n\n",
			printf("This is a char "G"[%-*c]"RST"\n", n, 'A'));

}

void	test_str()
{
	char	*s = "Special Beam Cannon";
	printf(Y"\tmine_CHARS=%d"RST"\n",
			ft_printf("This is a str "Y"[%s]"RST"\n", s));
	printf(G"\treal_CHARS=%d"RST"\n\n",
			printf("This is a str "G"[%s]"RST"\n", s));

	printf(Y"\tmine_CHARS=%d"RST"\n",
			ft_printf("This is a str "Y"[%10s]"RST"\n", s));
	printf(G"\treal_CHARS=%d"RST"\n\n",
			printf("This is a str "G"[%10s]"RST"\n", s));

	printf(Y"\tmine_CHARS=%d"RST"\n",
			ft_printf("This is a str "Y"[%10.3s]"RST"\n", s));
	printf(G"\treal_CHARS=%d"RST"\n\n",
			printf("This is a str "G"[%10.3s]"RST"\n", s));

	printf(Y"\tmine_CHARS=%d"RST"\n",
			ft_printf("This is a str "Y"[%-10.3s]"RST"\n", s));
	printf(G"\treal_CHARS=%d"RST"\n\n",
			printf("This is a str "G"[%-10.3s]"RST"\n", s));

	printf(Y"\tmine_CHARS=%d"RST"\n",
			ft_printf("This is a str "Y"[%*.*s]"RST"\n", 3, 6, s));
	printf(G"\treal_CHARS=%d"RST"\n\n",
			printf("This is a str "G"[%*.*s]"RST"\n", 3, 6,  s));
}


void test_int() {
    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("This is a int "Y"[%d]"RST"\n", INT_MIN));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("This is a int "G"[%d]"RST"\n", INT_MIN));

    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("This is a int "Y"[%d]"RST"\n", 42));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("This is a int "G"[%d]"RST"\n", 42));

    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("This is a int "Y"[%10d]"RST"\n", 42));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("This is a int "G"[%10d]"RST"\n", 42));

    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("This is a int "Y"[%-10d]"RST"\n", 42));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("This is a int "G"[%-10d]"RST"\n", 42));

    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("This is a int "Y"[%+10d]"RST"\n", 42));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("This is a int "G"[%+10d]"RST"\n", 42));

    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("This is a int "Y"[% 10d]"RST"\n", 42));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("This is a int "G"[% 10d]"RST"\n", 42));

    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("This is a int "Y"[%1d]"RST"\n", 42));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("This is a int "G"[%1d]"RST"\n", 42));

    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("This is a int "Y"[%-10.3d]"RST"\n", 42));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("This is a int "G"[%-10.3d]"RST"\n", 42));

    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("This is a int "Y"[% 10.7d]"RST"\n", 42));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("This is a int "G"[% 10.7d]"RST"\n", 42));

   printf(Y"\tmine_CHARS=%d"RST"\n",
       ft_printf("This is a int "Y"[%10.7d]"RST"\n", 42));
printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
       printf("This is a int "G"[%10.7d]"RST"\n", 42));

printf(Y"\tmine_CHARS=%d"RST"\n",
       ft_printf("This is a int "Y"[%.*d]"RST"\n", 8, 42));
printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
       printf("This is a int "G"[%.*d]"RST"\n", 8, 42));

}

void test_ptr() {
    int n = 42;

    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("Basic pointer: "Y"[%p]"RST"\n", (void*)&n));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("Basic pointer: "G"[%p]"RST"\n", (void*)&n));

    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("Width of 20: "Y"[%20p]"RST"\n", (void*)&n));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("Width of 20: "G"[%20p]"RST"\n", (void*)&n));

    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("Left-justified with width of 15: "Y"[%-15p]"RST"\n", (void*)&n));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("Left-justified with width of 15: "G"[%-15p]"RST"\n", (void*)&n));

    // Note: The '#' flag is not typically used with '%p' in standard C
    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("Alternate form: "Y"[%p]"RST"\n", (void*)&n));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("Alternate form: "G"[%p]"RST"\n", (void*)&n));

    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("Crazy combination: "Y"[%-20p]"RST"\n", (void*)&n));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("Crazy combination: "G"[%-20p]"RST"\n", (void*)&n));

    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("Precision and width: "Y"[%15p]"RST"\n", (void*)&n));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("Precision and width: "G"[%15p]"RST"\n", (void*)&n));
}
void test_percent() {
    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("This prints a percent sign "Y"[%%]"RST"\n"));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("This prints a percent sign "G"[%%]"RST"\n"));
}

void test_u() {
    printf(Y"\tmine_CHARS=%d"RST"\n",
           ft_printf("This is an unsigned int "Y"[%u]"RST"\n", UINT_MAX));
    printf(G"\treal_CHARS=%d"RST"\n\n\n\n",
           printf("This is an unsigned int "G"[%u]"RST"\n", UINT_MAX));
}
int main()
{
	
	ft_printf("CHARS");
	test_char();

	ft_printf("%");
	test_percent();

	ft_printf("STRING");
	test_str();
	

	ft_printf("INT");
	test_int();

	
	ft_printf("U");
	test_u();

	ft_printf("PTR");
	test_ptr();
	
}*/