#include<iostream>
#include<conio.h> 
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	float a,b,c,u,alan;
	
	
	cout<<"a köşesinin uzunluğu(m cinsinden) : ";
	cin>>a;
	
	cout<<"b köşesinin uzunluğu(m cinsinden) : ";
	cin>>b;
	
	cout<<"c köşesinin uzunluğu(m cinsinden) : ";
	cin>>c;
	
	u=(a+b+c)/2;
	
	alan=sqrt(u*(u-a)*(u-b)*(u-c));
	cout<<"toplam alan : "<<alan;
	
	return 0;
}
