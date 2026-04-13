/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:26:14 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/09 16:52:30 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void    ft_putnbr_fd(int nb, int fd)
{
    if (nb == -2147483648)
    {
        write (fd, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        write (fd, "-", 1);
        nb = -nb;
    }
    if (nb >= 10)
        ft_putnbr_fd(nb / 10, fd);
    ft_putchar_fd(nb % 10 + '0', fd);
}
