#include <unistd.h>

int lenght( char * str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

void *tersini_yaz(char *str)
{
	int i;
	i = lenght(str);
	i--;
	while(i >= 0)
	{
		write(1,&str[i],1);
		i--;
	}
	return(str);
}

int main()
{
	char str[] = "qwerty";
	tersini_yaz(str);
}
