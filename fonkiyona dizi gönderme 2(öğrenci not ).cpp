/*
öğrenci not girme ve ortalama hesaplama
*/

#include<stdio.h>
#define m 5
void fonksiyon(int notoku[] , int boyut)
{
	for(int i=1;i<=boyut;i++)
	{
		printf("%d. ogrencinin not:",i);
		scanf("%d", &notoku[i]);
	}
	printf("\n\n");

    for(int i=1;i<=boyut;i++)
    {	
	printf("%d. ogrencinin notu : %d \n", i,notoku[i]);
}

}
float orthesap(int notoku[],int boyut)
{
	int toplam=0;
	for(int i=1;i<=boyut;i++)
	{
		toplam+=notoku[i];
	}
	float ort=toplam/boyut;
	printf("sinif ortalamasi %.1f:", ort);
	return ort;
}


int main()
{
	int dizi[m];
    fonksiyon(dizi,m);
    orthesap(dizi,m);
    
}
