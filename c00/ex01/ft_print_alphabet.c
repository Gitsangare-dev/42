#include <unistd.h>

/*void ft_print_alphabet(void)
{
	write(1,"abcdefghijklmnopqrstuvwxyz",26);
}*/ 
void ft_print_alphabet(void)
{
	char boucle = 97;
	char tour = 122;
	while(boucle <= tour)
	{
		write(1,&boucle,1);//ab
		boucle++;
	}
}






int main (void)
{
	ft_print_alphabet();//pause
}
