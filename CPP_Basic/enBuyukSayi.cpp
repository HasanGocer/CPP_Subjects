#include<iostream>
#include<conio.h> 
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	int enBuyuk=0,sayi;
	
	cout<<"kaç sayı gireceksin : ";
	cin>>sayi;
	int Dsayi[sayi];
	
	for(int i=0;i<sayi;i++)
	{
		cout<<i+1<<". sayıyı giriniz : ";
		cin>>Dsayi[i];
		if(enBuyuk<Dsayi[i])
		{
			enBuyuk=Dsayi[i];
		}
	}
	for(int i=0;i<sayi;i++)
	{
		cout<<i+1<<". sayınız : "<<Dsayi[i]<<endl;
	}
	
	cout<<"en büyük sayınız : "<<enBuyuk;
	
	
	return 0;
}
