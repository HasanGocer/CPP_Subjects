#include<iostream>
#include<conio.h> 
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	int i1=1,i2,i3=1;
	
	cout<<"sayınızı giriniz : ";
	cin>>i2;
	
	while(i1<=i2)
	{
		i3*=i1;
		i1++;
	}
	cout<<"girdiğiniz sayının faktöriyeli : "<<i3;
	
	
	return 0;
}
