#include<iostream>
#include<conio.h> 
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	int kilo;
	float vki,boy;
	
	cout<<"boyunuzu giriniz : ";
	cin>>boy;
	
	
	cout<<"kilonuzu giriniz : ";
	cin>>kilo;
	
	vki=kilo/pow(boy,2);
	
	if(18.5>vki)
	{
		cout<<vki<<endl<<"zayıf";
	}
	else if(24.9>vki)
	{
		cout<<vki<<endl<<"normal";
	}
	else if(29.9>vki)
	{
		cout<<vki<<endl<<"fazla kilolu";
	}
	else if(34.9>vki)
	{
		cout<<vki<<endl<<"1. derece obez";
	}
	else if(39.9>vki)
	{
		cout<<vki<<endl<<"2. derece obez";
	}
	else
	{
		cout<<vki<<endl<<"3. derece obez";
	}
	
	
	
	
	
	return 0;
}
