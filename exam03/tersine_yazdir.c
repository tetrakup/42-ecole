#include <unistd.h>

int uzunluk(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

void *tersine_yazdir(char *str)
{
	int i ;
	i = uzunluk(str);
	i--;
	while( i >= 0)
	{
		write(1,&str[i],1);
		i--;
	}
	return(str);
}

int main()
{
	char str[]="abcçde";
	tersine_yazdir(str);
}
