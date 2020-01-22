/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 14:23:55 by charoua           #+#    #+#             */
/*   Updated: 2020/01/20 17:42:53 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		main(void)
{
	int i;
/*	printf ("TEST C ET %% :\n");
	i = printf ("Preceding with zeros:%c bbbb\n", 56);
	ft_printf ("Preceding with zeros:%c bbbb\n", 56);
	printf ("Size vaut %d\n", i);
	i = printf ("Preceding with zeros:%% bbbb\n");
	ft_printf ("Preceding with zeros:%% bbbb\n");
	printf ("Size vaut %d\n", i);
	i = printf ("Preceding with zeros:%-20.5c bbbb\n", '\0');
	ft_printf ("Preceding with zeros:%-20.5c bbbb\n", '\0');
	printf ("Size vaut %d\n", i);
	i = printf ("Preceding with zeros:%-20.5% bbbb\n");
	ft_printf ("Preceding with zeros:%-20.5% bbbb\n");
	printf ("Size vaut %d\n", i);
	i = printf ("Preceding with zeros:%020.5c bbbb\n", 'c');
	ft_printf ("Preceding with zeros:%020.5c bbbb\n", 'c');
	printf ("Size vaut %d\n", i);
	i = printf ("Preceding with zeros:%020.5% bbbb\n");
	ft_printf ("Preceding with zeros:%020.5% bbbb\n");
	printf ("Size vaut %d\n", i);
	i = printf ("Preceding with zeros:%20.5c bbbb\n", 'c');
	ft_printf ("Preceding with zeros:%20.5c bbbb\n", 'c');
	printf ("Size vaut %d\n", i);
	i = printf ("Preceding with zeros:%20.5% bbbb\n");
	ft_printf ("Preceding with zeros:%20.5% bbbb\n");
	printf ("Size vaut %d\n", i);

	printf ("\n\nTEST S :\n");
	i = printf ("1 Width plus grand que str:%-50.5s bbbb\n", "salut comment ca va");
	ft_printf ("1 Width plus grand que str:%-50.5s bbbb\n", "salut comment ca va");
	printf ("Size vaut %d\n", i);
	i = printf ("1 Width plus grand que str:%050.5s bbbb\n", "salut comment ca va");
	ft_printf ("1 Width plus grand que str:%050.5s bbbb\n", "salut comment ca va");
	printf ("Size vaut %d\n", i);
	i = printf ("1 Width plus grand que str:%50.55s bbbb\n", "salut comment ca va");
	ft_printf ("1 Width plus grand que str:%50.55s bbbb\n", "salut comment ca va");
	printf ("Size vaut %d\n", i);
	i = printf ("1 Width plus grand que str:%50.40s bbbb\n", "salut comment ca va");
	ft_printf ("1 Width plus grand que str:%50.40s bbbb\n", "salut comment ca va");
	printf ("Size vaut %d\n", i);
	i = printf ("1 Preci plus petit que width:%10.5s bbbb\n", "salut comment ca va");
	ft_printf ("1 Preci plus petit que width:%10.5s bbbb\n", "salut comment ca va");
	printf ("Size vaut %d\n", i);
	i = printf ("1 Str plus grand que preci:%10.5s bbbb\n", "salut comment ca va");
	ft_printf ("1 Str plus grand que preci:%10.5s bbbb\n", "salut comment ca va");
	printf ("Size vaut %d\n", i);
	i = printf ("2 Str plus grand que preci:%5.10s bbbb\n", "salut comment ca va");
	ft_printf ("2 Str plus grand que preci:%5.10s bbbb\n", "salut comment ca va");
	printf ("Size vaut %d\n", i);
	i = printf ("3 Str plus petit que preci et plus grand que width,:%2.10s bbbb\n", "salut");
	ft_printf ("3 Str plus petit que preci et plus grand que width,:%2.10s bbbb\n", "salut");
	printf ("Size vaut %d\n", i);
	i = printf ("NULL:%2.2s bbbb\n", NULL);
	ft_printf ("NULL:%2.2s bbbb\n", NULL);
	printf ("Size vaut %d\n", i);
	i = printf ("chaine:%s bbbb\n", "J'en peux plus");
	ft_printf ("chaine:%s bbbb\n", "J'en peux plus");
	printf ("Size vaut %d\n", i);

	printf ("\n\nTEST P :\n");
	i = printf ("Pointeur:%p bbbb\n", (void *)0);
	ft_printf ("Pointeur:%p bbbb\n", (void *)0);
	printf ("Size vaut %d\n", i);
	i = printf ("Pointeur:%20.0p bbbb\n", (void *)0);
	ft_printf ("Pointeur:%20.0p bbbb\n", (void *)0);
	printf ("Size vaut %d\n", i);
	i = printf ("Pointeur:%020p bbbb\n", (void *)-9223372036854775807);
	ft_printf ("Pointeur:%020p bbbb\n", (void *)-9223372036854775807);
	printf ("Size vaut %d\n", i);
	i = printf ("Pointeur:%20p bbbb\n", (void *)1);
	ft_printf ("Pointeur:%20p bbbb\n", (void *)1);
	printf ("Size vaut %d\n", i);
	i = printf ("Pointeur:%020p bbbb\n", (void *)1);
	ft_printf ("Pointeur:%020p bbbb\n", (void *)1);
	printf ("Size vaut %d\n", i);
	i = printf ("Pointeur:%020.5p bbbb\n", (void *)1);
	ft_printf ("Pointeur:%020.5p bbbb\n", (void *)1);
	printf ("Size vaut %d\n", i);
	i = printf ("Pointeur:%-20p bbbb\n", (void *)1);
	ft_printf ("Pointeur:%-20p bbbb\n", (void *)1);
	printf ("Size vaut %d\n", i);
	i = printf ("Pointeur:%-20.5p bbbb\n", (void *)1);
	ft_printf ("Pointeur:%-20.5p bbbb\n", (void *)1);
	printf ("Size vaut %d\n", i);
	i = printf ("Pointeur:%020.55p bbbb\n", (void *)1);
	ft_printf ("Pointeur:%020.55p bbbb\n", (void *)1);
	printf ("Size vaut %d\n", i);
	i = printf ("Pointeur:%020.0p bbbb\n", (void *)5656);
	ft_printf ("Pointeur:%020.0p bbbb\n", (void *)5656);
	printf ("Size vaut %d\n", i);
	i = printf ("Pointeur:%020.p bbbb\n", (void *)1);
	ft_printf ("Pointeur:%020.p bbbb\n", (void *)1);
	printf ("Size vaut %d\n", i);
	i = printf ("Pointeur:%20p bbbb\n", (void *)1);
	ft_printf ("Pointeur:%20p bbbb\n", (void *)1);
	printf ("Size vaut %d\n", i);
	i = printf ("Pointeur:%020.5p bbbb\n", (void *)1);
	ft_printf ("Pointeur:%020.5p bbbb\n", (void *)1);
	printf ("Size vaut %d\n", i);
	i = printf ("Pointeur:%-2.5p bbbb\n", (void *)1);
	ft_printf ("Pointeur:%-2.5p bbbb\n", (void *)1);
	printf ("Size vaut %d\n", i);


	printf ("\n\nTEST D ET I :\n");
	i = printf ("I et D:%20i et %20d fin\n", -0, -0);
	ft_printf ("I et D:%20i et %20d fin\n", -0, -0);
	printf ("Size vaut %d\n", i);
	i = printf ("I et D:%20i et %20d fin\n", -555, -666);
	ft_printf ("I et D:%20i et %20d fin\n", -555, -666);
	printf ("Size vaut %d\n", i);
	i = printf ("I et D:%020i et %020d fin\n", -555, -666);
	ft_printf ("I et D:%020i et %020d fin\n", -555, -666);
	printf ("Size vaut %d\n", i);
	i = printf ("I et D:%020.5i et %020.5d fin\n", -555, -666);
	ft_printf ("I et D:%020.5i et %020.5d fin\n", -555, -666);
	printf ("Size vaut %d\n", i);
	i = printf ("I et D:%-20.5i et %20.5d fin\n", -555, -666);
	ft_printf ("I et D:%-20.5i et %20.5d fin\n", -555, -666);
	printf ("Size vaut %d\n", i);
	i = printf ("I et D:%-20i et %-20d fin\n", -555, -666);
	ft_printf ("I et D:%-20i et %-20d fin\n", -555, -666);
	printf ("Size vaut %d\n", i);
	i = printf ("I et D:%-20i et %-20d fin\n", 0, 0);
	ft_printf ("I et D:%-20i et %-20d fin\n", 0, 0);
	printf ("Size vaut %d\n", i);
	i = printf ("I et D:%020i et %020d fin\n", 0, 0);
	ft_printf ("I et D:%020i et %020d fin\n", 0, 0);
	printf ("Size vaut %d\n", i);
	i = printf ("I et D:%020.0i et %020.0d fin\n", 0, 0);
	ft_printf ("I et D:%020.0i et %020.0d fin\n", 0, 0);
	printf ("Size vaut %d\n", i);
	i = printf ("I et D:%020.50i et %020.50d fin\n", 2147483647, 2147483647);
	ft_printf ("I et D:%020.50i et %020.50d fin\n", 2147483647, 2147483647);
	printf ("Size vaut %d\n", i);
	i = printf ("I et D:%-20.50i et %-20.50d fin\n", 2147483647, 2147483647);
	ft_printf ("I et D:%-20.50i et %-20.50d fin\n", 2147483647, 2147483647);
	printf ("Size vaut %d\n", i);
	i = printf ("I et D:%050.20i et %050.20d fin\n", -2147483648, -2147483648);
	ft_printf ("I et D:%050.20i et %050.20d fin\n", -2147483648, -2147483648);
	printf ("Size vaut %d\n", i);
	i = printf ("I et D:%-50.20i et %-50.20d fin\n", -2147483648, -2147483648);
	ft_printf ("I et D:%-50.20i et %-50.20d fin\n", -2147483648, -2147483648);
	printf ("Size vaut %d\n", i);

	printf ("\n\nTEST U :\n");
	i = printf ("U:|%20u|\n", -1);
	ft_printf ("U:|%20u|\n", -1);
	printf ("Size vaut %d\n", i);
	i = printf ("U:|%20u|\n", -2147483648);
	ft_printf ("U:|%20u|\n", -2147483648);
	printf ("Size vaut %d\n", i);
	i = printf ("U:|%u|\n", -2147483648);
	ft_printf ("U:|%u|\n", -2147483648);
	printf ("Size vaut %d\n", i);
	i = printf ("U:|%-20.5u|\n", -2147483648);
	ft_printf ("U:|%-20.5u|\n", -2147483648);
	printf ("Size vaut %d\n", i);
	i = printf ("U:|%020.5u|\n", -2147483648);
	ft_printf ("U:|%020.5u|\n", -2147483648);
	printf ("Size vaut %d\n", i);
	i = printf ("U:|%05.20u|\n", -2147483648);
	ft_printf ("U:|%05.20u|\n", -2147483648);
	printf ("Size vaut %d\n", i);
	i = printf ("U:|%-5.20u|\n", -2147483648);
	ft_printf ("U:|%-5.20u|\n", -2147483648);
	printf ("Size vaut %d\n", i);
	i = printf ("U:|%20u|\n", 2147483647);
	ft_printf ("U:|%20u|\n", 2147483647);
	printf ("Size vaut %d\n", i);
	i = printf ("U:|%20.0u|\n", -0);
	ft_printf ("U:|%20.0u|\n", -0);
	printf ("Size vaut %d\n", i);
	i = printf ("U:|%20.0u|\n", 0);
	ft_printf ("U:|%20.0u|\n", 0);
	printf ("Size vaut %d\n", i);

	printf ("\n\nTEST x et X :\n");
	i = printf ("x:|%.5x|\n", -2147483648);
	printf ("Size vaut %d\n", i);
	i = ft_printf ("x:|%.5x|\n", -2147483648);
	printf ("Size vaut %d\n", i);
	i = printf ("X:|%20.10X|\n", -1);
	ft_printf ("X:|%20.10X|\n", -1);
	printf ("Size vaut %d\n", i);
	i = printf ("x:|%20.0x|\n", -0);
	ft_printf ("x:|%20.0x|\n", -0);
	printf ("Size vaut %d\n", i);
	i = printf ("X:|%20.0X|\n", -0);
	printf ("Size vaut %d\n", i);
	i = ft_printf ("X:|%20.0X|\n", -0);
	printf ("Size vaut %d\n", i);

//i =printf("q6rev4Wz2u%xuBFCO4i%.5x", 0, -1823618680);
i =printf("q6rev4Wz2u%x%-*.0duBFCO4i%.5x", 0, 7, -2147483647, -1823618680);
//i =printf("q6rev4Wz2u%-*.0duBFCO4i", 7, -2147483647);
	printf ("Size vaut %d\n", i);
//i = ft_printf("q6rev4Wz2u%xuBFCO4i%.5x", 0, -1823618680);
i = ft_printf("q6rev4Wz2u%x%-*.0duBFCO4i%.5x", 0, 7, -2147483647, -1823618680);
//i = ft_printf("q6rev4Wz2u%-*.0duBFCO4i", 7, -2147483647);
	printf ("Size vaut %d\n", i);
*/
	i = printf("|%c|\n", 0);
	printf ("Size vaut %d\n", i);
	i = ft_printf("|%c|\n", 0);
	printf ("Size vaut %d\n", i);

	return (0);
}
