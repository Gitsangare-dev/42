#include <unistd.h>

void ft_putchar(char n)
{
	write(1, &n, 1);
}

void ft_print_comb(void)
{
	int a = 0;
	int b;
	int c;
	while(a <= 7)
	{
		b = a + 1;
		while(b <= 8)
		{
			c = b + 1;
			while(c <= 9)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
				if(a != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}

}

// 012, 013, 014, 018, 019, 

int main()
{
	ft_print_comb();
}
