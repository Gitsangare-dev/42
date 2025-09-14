#include <unistd.h>

void ft_print_numbers(void)
{
	char d_num= 48;
	char f_num= 57;
	while(f_num >= d_num)
	{
		write(1, &d_num, 1);
		d_num++;
	}
}





int main(void)
{
	ft_print_numbers();
}
