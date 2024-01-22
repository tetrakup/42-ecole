#include <unistd.h>

void ft_rev(int *tab, int size)
{
	int a,b,rev;

	a = 0;
	b = size -1;
	while(a < (size / 2))
	{
		rev = tab[a];
		tab[a] = tab[b];
		tab[b] = rev;
		a++;
		b--;
		
	}
}
int main(void)
{
	int tab[] = {1,2,3,4};
	int size;
	size = 4;

	ft_rev(tab, size);
	i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
