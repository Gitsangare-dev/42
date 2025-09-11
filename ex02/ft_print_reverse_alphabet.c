# include <unistd.h>

void ft_print_reverse_alphabet(void)
{

	char d_alphabet = 97;
	char f_alphabet = 122;
	while(f_alphabet == d_alphabet)
	{
		write(1,&f_alphabet,1);
		f_alphabet--;
	}

}





int main (void)
{

	ft_print_reverse_alphabet();
}
