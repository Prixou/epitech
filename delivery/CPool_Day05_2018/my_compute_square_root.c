/*
** EPITECH PROJECT, 2018
** my_compute_square_root
** File description:
** day05
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    while ( i * i != nb) {
	i++;
	if (i * i == nb)
	    return (i);
        if (i * i > nb)
	    return (0);
		}
}
