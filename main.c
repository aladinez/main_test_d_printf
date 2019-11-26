#include "ft_printf.h"

int main(void)
 {
    printf("|%d|\n", ft_printf("%0*.*d|", 10, 5, 42));
    printf("|%d|\n\n", printf("%0*.*d", 10, 5, 42));

    printf("|%d|\n", ft_printf("%0*.*d|", -10, 5, 42));
    printf("|%d|\n\n", printf("%0*.*d", -10, 5, 42));

    printf("|%d|\n", ft_printf("%0*.*d|", 10, -5, -42));
    printf("|%d|\n\n", printf("%0*.*d", 10, -5, -42));

    printf("|%d|\n", ft_printf("%0*.*d|", 10, 5, -42));
    printf("|%d|\n\n", printf("%0*.*d", 10, 5, -42));

    printf("|%d|\n", ft_printf("%0*.*d|", -10, -5, -55));
    printf("|%d|\n\n", printf("%0*.*d", -10, -5, -55));

    printf("|%d|\n", ft_printf("%0*.*d|", -10, -5, 42));
    printf("|%d|\n\n", printf("%0*.*d", -10, -5, 42));

    printf("|%d|\n", ft_printf("%0*.*d|", 10, -5, -42));
    printf("|%d|\n\n", printf("%0*.*d", 10, -5, -42));

printf("\n");

    printf("|%d|\n", ft_printf("%0*.*d|", 10, 15, 42));
    printf("|%d|\n\n", printf("%0*.*d", 10, 15, 42));

    printf("|%d|\n", ft_printf("%0*.*d|", -10, 15, 42));
    printf("|%d|\n\n", printf("%0*.*d", -10, 15, 42));

    printf("|%d|\n", ft_printf("%0*.*d|", 10, -15, 42));
    printf("|%d|\n\n", printf("%0*.*d", 10, -15, 42));

    printf("|%d|\n", ft_printf("%0*.*d|", 10, 15, -42));
    printf("|%d|\n\n", printf("%0*.*d", 10, 15, -42));

    printf("|%d|\n", ft_printf("%0*.*d|", -10, -15, -42));
    printf("|%d|\n\n", printf("%0*.*d", -10, -15, -42));

    printf("|%d|\n", ft_printf("%0*.*d|", -10, -15, 42));
    printf("|%d|\n\n", printf("%0*.*d", -10, -15, 42));

    printf("|%d|\n", ft_printf("%0*.*d|", 10, -15, -42));
    printf("|%d|\n\n", printf("%0*.*d", 10, -15, -42));

printf("\n");
printf("\n");

    printf("|%d|\n", ft_printf("%*.*d|", 10, 5, 42));
    printf("|%d|\n\n", printf("%*.*d", 10, 5, 42));

    printf("|%d|\n", ft_printf("%*.*d|", -10, 5, 42));
    printf("|%d|\n\n", printf("%*.*d", -10, 5, 42));

    printf("|%d|\n", ft_printf("%*.*d|", 10, -5, 42));
    printf("|%d|\n\n", printf("%*.*d", 10, -5, 42));





    printf("|%d|\n", ft_printf("%*.*d|", 10, 5, -55));
    printf("|%d|\n\n", printf("%*.*d", 10, 5, -55));

    printf("|%d|\n", ft_printf("%10.5d|", -55));
    printf("|%d|\n\n", printf("%10.5d", -55));





    printf("|%d|\n", ft_printf("%*.*d|", -10, -5, -42));
    printf("|%d|\n\n", printf("%*.*d", -10, -5, -42));

    printf("|%d|\n", ft_printf("%*.*d|", -10, -5, 42));
    printf("|%d|\n\n", printf("%*.*d", -10, -5, 42));

    printf("|%d|\n", ft_printf("%*.*d|", 10, -5, -42));
    printf("|%d|\n\n", printf("%*.*d", 10, -5, -42));

printf("\n");
printf("\n");

    printf("|%d|\n", ft_printf("%*.*d|", 10, 15, 42));
    printf("|%d|\n\n", printf("%*.*d", 10, 15, 42));

    printf("|%d|\n", ft_printf("%*.*d|", -10, 15, 42));
    printf("|%d|\n\n", printf("%*.*d", -10, 15, 42));

    printf("|%d|\n", ft_printf("%*.*d|", 10, -15, 42));
    printf("|%d|\n\n", printf("%*.*d", 10, -15, 42));





    printf("|%d|\n", ft_printf("%*.*d|", 10, 15, -55));
    printf("|%d|\n\n", printf("%*.*d", 10, 15, -55));

  	printf("|%d|\n", ft_printf("%10.15d|", -55));
    printf("|%d|\n\n", printf("%10.15d", -55));





    printf("|%d|\n", ft_printf("%*.*d|", -10, -15, -42));
    printf("|%d|\n\n", printf("%*.*d", -10, -15, -42));

    printf("|%d|\n", ft_printf("%*.*d|", -10, -15, 42));
    printf("|%d|\n\n", printf("%*.*d", -10, -15, 42));

    printf("|%d|\n", ft_printf("%*.*d|", 10, -15, -42));
    printf("|%d|\n\n", printf("%*.*d", 10, -15, -42));


    return (0);
}