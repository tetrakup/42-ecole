#include <stdio.h>

int main (void){
	/*
	int = tam sayı =11 = %d
	float = ondalıklı sayı = 3.4 = %f
	double = ondalıklı büyüksayı = 3.1415747 = %lf
	char = harf = 'A' = %c
	*/
	int yas = 24;
	int xyas = 25;
	float pi=3.4;
	double genis_pi = 3.43453433;
	char harf ='a';

	printf("yaşınız: %d xin yaşı:%d \n",yas,xyas);
	printf("pi degeri:%f \n",pi);
	printf("buyuk pi degeri:%lf \n",genis_pi);
	printf("karakter:%c \n",harf);
	
	return 0;
	}
