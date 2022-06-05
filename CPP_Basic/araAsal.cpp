#include<iostream>
#include<conio.h> 
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	int i1=0,i2,sayac=0;
	
	cout<<"sayı giriniz : ";
	cin>>i2;
	
	for(int i=2;i<i2;i++)
	{
		for(int s=2;s<i;s++)
		{
			if(i%s==0)
			{
				sayac++;
			}
			
		}
		if(sayac==0)
		{
			cout<<i<<endl;
		}
		
		sayac=0;
	}
	
	
	return 0;
}
