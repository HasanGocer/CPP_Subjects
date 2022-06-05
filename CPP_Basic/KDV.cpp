#include<iostream>
#include<conio.h> 
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish");
	float temiz,kdvli;
	
	cout<<"ücret : ";
	cin>>temiz;
	
	kdvli=temiz*1.18;
	cout<<"kdvli ücret : "<<kdvli;
	
	
	return 0;
}
