#include <unistd.h>

void	ft_ft(int	*nbr)
{
	*nbr=42;

}

int	main()
{
	int *nbr;
	int a = 5;
	nbr = &a;
	write(1,&a,1);
}
