#include <unistd.h>

void sayi_yaz(int sayi)
{
	if(sayi > 9)
		sayi_yaz(sayi / 10);
	write(1,&"0123456789"[sayi % 10],1);
}
int main()
{
	int sayi = 0;
	while(sayi <=100)
	{
		if((sayi % 5 == 0) && (sayi % 3 == 0))
		{
			write(1,"fb",2);
		}
		else if(sayi % 5 == 0)
		{
			write(1,"f",1);
		}
		else if(sayi % 3 == 0)
		{
			write(1,"b",1);
		}
		else
			sayi_yaz(sayi);
	write(1,"\n",1);
	sayi++;
	}
}
