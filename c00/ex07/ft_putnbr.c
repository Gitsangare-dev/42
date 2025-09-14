#include <unistd.h>
#include <limits.h>

void ft_putchar(char n)
{
	write(1, &n, 1);

}

void ft_putnbr(int nb)
{
	long long nbr;

	nbr = nb;
	if(nbr< 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if(nbr > 9)
	{
		ft_putnbr(nbr / 10);

	}
	ft_putchar(nbr % 10 + '0');
	
}



int main()
{
	ft_putnbr(54);
}
